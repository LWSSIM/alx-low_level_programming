# Hash Function README

## What is a hash function?

A hash function is a mathematical algorithm that takes an input (or 'message') and produces a fixed-size string of characters, which is typically a hash code. The primary purpose of a hash function is to uniquely represent data in a way that is efficient to compute. It is commonly used in various applications such as data indexing, data integrity verification, and cryptographic systems.

### Code Example in C:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int simpleHash(char *input) {
    unsigned int hash = 0;
    for (int i = 0; i < strlen(input); i++) {
        hash = hash * 31 + input[i]; /* 31(or 33 in many examples) is arbitrary */
    }
    return hash;
}
```

## What makes a good hash function?

A good hash function should have the following properties:
1. **Deterministic:** For the same input, the hash function must always produce the same output.
2. **Efficient:** The hash function should be computationally efficient.
3. **Uniform Distribution:** The hash values should be uniformly distributed to minimize collisions.
4. **Non-reversible:** It should be computationally infeasible to reverse the hash function and retrieve the original input.
5. **Avalanche Effect:** A small change in the input should produce a significantly different hash value.

## What is a hash table, how do they work, and how to use them?

A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found. Hash tables offer efficient insertion, deletion, and retrieval operations.

### Code Example in C (Simple Hash Table):
```c
#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 100

struct Node {
    int key;
    int value;
    struct Node* next;
};

struct Node* hashTable[TABLE_SIZE] = {NULL};

void insert(int key, int value) {
    int index = key % TABLE_SIZE;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

int get(int key) {
    int index = key % TABLE_SIZE;
    struct Node* current = hashTable[index];

    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }

    return -1; // Key not found
}
```

## What is a collision and what are the main ways of dealing with collisions in the context of a hash table?


A collision in the context of a hash table occurs when two or more keys result in the same hash value. This can happen due to the limited range of hash values compared to the potentially larger range of keys.

There are several main ways to deal with collisions in hash tables:

1. **Separate Chaining**: In this approach, each hash table bucket contains a linked list or some other data structure to store multiple elements that have the same hash value. When a collision occurs, the new element is appended to the linked list at the corresponding bucket.

   ```c
   // Collision handling using separate chaining in C

   struct Node {
       int key;
       int value;
       struct Node* next;
   };

   struct HashTable {
       int size;
       struct Node** buckets;
   };
   ```

2. **Open Addressing**: In open addressing, collisions are resolved by finding an alternative location within the hash table to store the colliding element. This can be done using various techniques like linear probing, quadratic probing, or double hashing.

   ```c
   // Collision handling using open addressing (linear probing) in C

   struct HashTable {
       int size;
       int* keys;
       int* values;
   };
   ```

3. **Robin Hood Hashing**: This technique extends open addressing and aims to minimize the variance in probe lengths by "robbing" elements from slots with longer probe sequences and moving them closer to the original hash position.

   ```c
   // Collision handling using Robin Hood hashing in C

   struct Entry {
       int key;
       int value;
       int probe_length;
   };

   struct HashTable {
       int size;
       struct Entry* entries;
   };
   ```

## What are the advantages and drawbacks of using hash tables?

Advantages of using hash tables include:

- **Fast Lookup**: Hash tables provide constant-time lookup complexity on average, making them efficient for retrieving values based on keys.
- **Flexible Key-Value Storage**: Hash tables allow storing arbitrary key-value pairs, which makes them suitable for a wide range of applications.
- **Efficient Insertion and Deletion**: In addition to fast lookups, hash tables offer efficient insertion and deletion operations, typically with an average constant-time complexity.

Drawbacks of using hash tables are:

- **Collisions**: Collisions can occur, which may degrade the performance of hash tables. Collision resolution techniques introduce additional complexity and can impact lookup time.
- **Space Overhead**: Hash tables require additional memory to store the hash table structure and handle collisions. The space overhead can be significant, especially when the load factor (number of items divided by the table size) is high.
- **Unordered Data**: Hash tables do not inherently maintain the order of inserted elements. If the order of elements is important, additional data structures or techniques may be required.

## What are the most common use cases of hash tables?

Hash tables are widely used in various scenarios due to their efficient lookup and storage capabilities. Some common use cases of hash tables include:

- **Caching**: Hash tables can be used as caches to store frequently accessed data. The keys can be the input parameters, and the values can be the corresponding results or computed values. This helps reduce computation time by avoiding redundant calculations.

- **Symbol Tables**: Hash tables are often used to implement symbol tables, where keys represent symbols (e.g., variable names) and values represent associated information (e.g., memory addresses or attributes). Symbol tables are fundamental in compilers, interpreters, and symbol lookup tasks.

- **Databases**: Hash tables are used in database systems for indexing and fast record retrieval. Hash-based indexing structures like hash indexes or hash-join algorithms leverage the efficiency of hash tables to speed up database operations.

- **Cryptography**: Hash tables play a crucial role in cryptographic applications, such as password storage. They are used to store hashed passwords, allowing fast verification while protecting the original passwords from being exposed.

- **Counting and Frequency Analysis**: Hash tables can be used to count occurrences of elements or perform frequency analysis. Each element can be mapped to a key, and the corresponding value can represent the count or frequency of that element.

These are just a few examples, and hash tables have many other applications in areas like networking, graph algorithms, data processing, and more.

## Conclusion

This README provided an overview of hash tables, explained collision handling techniques, discussed the advantages and drawbacks of using hash tables, and highlighted common use cases.
