#include <stdio.h>

void start_func(void) __attribute__((constructor));
/**
 * start_func  - function that print a string before main is run
 *
 * return: void
 */

void start_func(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
