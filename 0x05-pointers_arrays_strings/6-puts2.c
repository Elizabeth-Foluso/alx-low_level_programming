#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */
void puts2(char *str)
{
	int x;

	for (x = 0; x < _strlen(str); x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
