#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: pointer
 */
void puts2(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
		if(*str == '\0')
		{
			break;
		}
		str++;
		
        }
        _putchar(10);
}
