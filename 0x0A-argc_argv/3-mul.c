#include <stdio.h>
#include <stdlib.h>

/**
 * main - mulitiplies two numbers
 * @argc: atgument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
int x, y;
if (argc < 3)
{
printf("error\n");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x *y);
return (0);
}
