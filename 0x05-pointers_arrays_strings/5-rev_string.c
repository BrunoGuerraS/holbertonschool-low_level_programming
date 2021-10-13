#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: pointer
 */
void rev_string(char *s)
{
	
	int count = 0;
	int i = 0;
	char *ptr1 = s;
	char *ptr2 = s;
	char tmp;
	

	while (*ptr1 != '\0')
	{
		count++;
		ptr1++;
	}

	ptr1--;
	
	while (i < count/2)
	{
		tmp = *ptr2;
		*ptr2 = *ptr1;
		*ptr1 = tmp;
		ptr2++;
		ptr1--;
	}
	_putchar(10);
}
