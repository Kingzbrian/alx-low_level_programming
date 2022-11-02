#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function to read and print text file
 * @filename: pinter to file
 * @letters: no of lettersto print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (o == -1 || r == -1 || w == -1 || w!=r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (0);
}
