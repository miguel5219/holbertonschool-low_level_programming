#include "main.h"
#include <stdio.h>

/**
  * main - print number of arguments
  * @argc: size of argv
  * @argv: program
  * Return: 0
  */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%i\n", argc - 1);

	return (0);
}
