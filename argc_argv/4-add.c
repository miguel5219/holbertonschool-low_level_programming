#include "main.h"

/**
  * main - adds positive numbers
  * @argv: array
  * @argc: count
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
