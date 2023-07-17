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

/*fn(init var of struct dog type)*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
