#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: string
  * @text_content: size_t
  * Return: int
  */

int append_text_to_file(const  char *filename, char *text_content)
{
	int file, wfile, tmp = 0;

	if (text_content != NULL)
		for (; text_content[tmp] != '\0'; tmp++)
		{
		}
	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	wfile = write(file, text_content, tmp);
	if (wfile == -1)
		return (-1);
	close(file);
	return (1);
}
