#include "main.h"
#include <string.h>
/*define data type*/

char *_strcat(char *dest, char *src);
{
	char s1[] = "Hello ";
	char s2[] = "World!\n";
	char *ss;

	printf("%s\n", s1);
	printf("%s", s2);
	ss = _strcat(s1, s2);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s", ss);
	return (dest);
}
