#include "main.h"
/**
  * print_alphabet - print alphabet
  * Return: 0
  */
void print_alphabet_x10(void)
{
int times;
char letter;

for (times = 0; times <= 9; times++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar ('\n');
}
}
