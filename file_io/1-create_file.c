#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of the file to create
  * @text_content: size_t
  * Return: int
  */

int create_file(const char *filename, char *text_content)
{
	int file, wfile, tmp = 0;

	if (text_content != NULL)
		for (tmp = 0; text_content[tmp] != '\0'; tmp++)
	
	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR |O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	wfile = write(file, text_content, tmp);
	if (wfile == -1)
		return (-1);
	close(file);
	return (1);
}
