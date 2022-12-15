#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 */
void print_alphabet_x10(void)
{

char letter = 'a';

while (letter <= 'z')
{
int count = 0;

while (count++ <= 9)

_putchar(letter);
letter++;
}
_putchar('\n');
}
