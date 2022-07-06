#include "main.h"

/**
  * main - multiplies two numbers
  * @argc: count
  * @argv: array
  * Return: 0
  */

int main(int argc, char **argv)
{
	int x;
	int y;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);

	return (0);
}
