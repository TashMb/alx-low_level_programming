#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: char to check
 * Return: always 0 (success)
 */
int _strlen(char *s)
{
int a = 0;
for (; *s++;)
a++;
return (a);
}
