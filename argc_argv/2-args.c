#include "main.h"

/**
  * main - prints the number of arguments
  * @argc: count
  * @argv: array
  * Return: 0
  */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
