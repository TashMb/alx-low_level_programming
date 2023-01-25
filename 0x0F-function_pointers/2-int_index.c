#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to execute func on
 * @size: number of elements in array
 * @cmp: is a pointer to the function you need to use
 * Return: index of first element,otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (-1);
i++;
}
}
}
return (-1);
}
