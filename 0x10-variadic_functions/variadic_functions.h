#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct format - list of type specifiers
 * @flag: single chars
 * @f: function for each flag
 */
typedef struct format
{
	char flag;
	void (*f)(va_list);
}f_list;

/*Flag Functions (defined in 3-print_all)*/
void c_fun(va_list args);/*print char*/
void i_fun(va_list args);/*print int*/
void s_fun(va_list args);/*print string*/
void f_fun(va_list args);/*print float*/

/*prints single char*/
int _putchar(char c);

/*return sum of all parametres*/
int sum_them_all(const unsigned int n, ...);

/*print numbers in parameters*/
void print_numbers(const char *separator, const unsigned int n, ...);

/*print strings*/
void print_strings(const char *separator, const unsigned int n, ...);

/*print anything*/
void print_all(const char * const format, ...);

#endif /*MAIN_H*/
