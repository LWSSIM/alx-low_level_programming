# Doubly Linked Lists in C

A doubly linked list is a data structure that consists of a collection of nodes, where each node contains both data and references (or links, pointers in C) to the previous and the next nodes in the list. This bidirectional linking allows for easy traversal in both directions, unlike a singly linked list, which only allows traversal in one direction.

## Table of Contents
- [Node Structure](#node-structure)
- [Doubly Linked List Structure](#doubly-linked-list-structure)
- [Operations](#operations)
  - [Insertion at the Beginning](#insertion-at-the-beginning)
  - [Insertion at the End](#insertion-at-the-end)
  - [Deletion](#deletion)
  - [Traversal](#traversal)
- [Example](#example)

### Node Structure

In C, a doubly linked list node is typically defined using a structure. Here's how you can define a doubly linked list node:

```c
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
```

Each node contains an integer data element and two pointers: `next` and `prev`, which point to the next and previous nodes in the list.

### Doubly Linked List Structure

The doubly linked list itself is also defined using a structure. Here's how you can define a doubly linked list structure:

```c
struct DoublyLinkedList {
    struct Node* head;
    struct Node* tail;
};
```

The `head` and `tail` pointers represent the first and last nodes in the list, respectively.

### Operations

You can perform various operations on a doubly linked list, such as insertion at the beginning and end, deletion of specific nodes, and traversal in both directions.

#### Insertion at the Beginning

To insert a new node at the beginning of the list, you can use the `insertAtBeginning` function, which creates a new node and updates the pointers accordingly.

```c
void insertAtBeginning(struct DoublyLinkedList* dll, int data);
```

#### Insertion at the End

To insert a new node at the end of the list, you can use the `insertAtEnd` function, which creates a new node and updates the pointers accordingly.

```c
void insertAtEnd(struct DoublyLinkedList* dll, int data);
```

#### Deletion

To delete a specific node from the list, you can use the `deleteNode` function, which updates the pointers of the adjacent nodes and frees the memory of the deleted node.

```c
void deleteNode(struct DoublyLinkedList* dll, struct Node* node_to_delete);
```

#### Traversal

You can traverse the doubly linked list in both directions using the `traverseForward` and `traverseBackward` functions. These functions print the data in each node.

```c
void traverseForward(struct DoublyLinkedList* dll);
void traverseBackward(struct DoublyLinkedList* dll);
```

### Example

Here's a simple example of using a doubly linked list in C:

```c
#include <stdio.h>
#include <stdlib.h>

/*Define the structures and functions as described above.*/

int main() {
    struct DoublyLinkedList* dll = createDoublyLinkedList();
    
    insertAtEnd(dll, 10);
    insertAtEnd(dll, 20);
    insertAtEnd(dll, 30);
    
    traverseForward(dll);   /*Output: 10 20 30*/
    traverseBackward(dll);  /*Output: 30 20 10*/
    
    /*Clean up memory by deleting nodes and freeing the list.*/
    
    return 0;
}
```

In this example, we create a doubly linked list, insert nodes, and then traverse the list in both directions. Don't forget to clean up memory by deleting nodes and freeing the list when you're done.
