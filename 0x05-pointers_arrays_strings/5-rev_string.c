#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int length;
	char *t = s;
	int i;

	for (length = 0; *t != '\0'; t++)
		length++;

	t--;
	length--;

for (i = 0; i <= length / 2; i++)
	{
char tmp = *t;
	*t = *s;
	*s = tmp;
	t--;
	s++;
	}
}
