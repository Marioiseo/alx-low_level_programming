#include "main.h"
/**
 * read_textfile - read with file manipulataion
 * @filename: the filename ^^
 * @letters: the bla bla inside
 * Return: num of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char buff[1024];
	ssize_t i = 0;

	if (!filename || !letters)
		return (0);
	fp = fopen(filename, "r");
	i = read(0, buff, letters);
	i = write(1, buff, i);
	fclose(fp);
	return (i);
}
