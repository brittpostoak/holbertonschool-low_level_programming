#include "main.h"
/**
 * _strchr - Entry point
 * @s: input value
 * @c: input value
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[1] >= '\0'; i++)
	{
		if (s[1] == c)
			return (&s[1]);
	}
	return (0);
}
