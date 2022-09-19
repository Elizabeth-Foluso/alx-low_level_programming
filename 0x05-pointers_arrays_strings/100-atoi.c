#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: returns integer value
 */
int _atoi(char *s)
{
	int val;
	char str[20];

	strcpy(str, "98993489");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	strcpy(str, "tutorialspoint.com");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	return (num);
}
