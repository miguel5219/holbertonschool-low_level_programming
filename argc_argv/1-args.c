#include "main.h"

/**
  * main - print number of arguments
  * @argc: size of argv
  * @ergv: program
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
