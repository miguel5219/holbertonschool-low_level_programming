#include "main.h"

/**
  * read_textfile - read a text file and prints
  * it to the POXIS standart output.
  *
  * @filename: string
  * @letters: number of letters it should read and print
  * Return: struct
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp;
	ssize_t file, rfile, wfile;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);
	rfile = read(file, tmp, letters);
	if (rfile == -1)
		return (0);
	wfile = write(STDOUT_FILENO, tmp, rfile);
	if (wfile == -1)
		return (0);
	free(tmp);
	close(file);

	return (rfile);
}
