#include <stdio.h>

/*Prototype*/
void constructor_func(void) __attribute__((constructor));
/**
 * constructor_func - Fn() to be excecuted bfr main()
 */
void constructor_func(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
