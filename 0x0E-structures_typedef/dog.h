#ifndef DOG_H
#define DOG_H
/**
 * struct dog - cute doggo info :3
 * @name: cute doggo name
 * @age: cute doggo age
 * @owner: doggo human
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*functions*/

/*fn(init var of struct dog type)*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*fn(print doggo struct)*/
void print_dog(struct dog *d);
/*create a new dog type*/
dog_t *new_dog(char *name, float age, char *owner);
/*let the DOGS out*/
void free_dog(dog_t *d);

/**
 * dog_t - typedef[struct dog]
 */
typedef struct dog dog_t;
#endif /*DOG_H*/
