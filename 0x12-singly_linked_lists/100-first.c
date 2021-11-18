#include <unistd.h>
#include <string.h>
void first(void) __attribute__ ((constructor));
/**
 * first - functions that print before the main
 * function is executed
 */
void first(void)
{
	char *t_1 = "You're beat! and yet, you must allow,\n";
	char *t_2 = "I bore my house upon my back!\n";

	write(1, t_1, strlen(t_1));
	write(1, t_2, strlen(t_2));
}
