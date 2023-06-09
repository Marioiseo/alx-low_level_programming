#include "main.h"
/**
 * read_textfile - read with file manipulataion
 * @filename: the filename ^^
 * @letters: the bla bla inside
 * Return: num of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char buff[8 * 1024];
	ssize_t i = 0;

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	i = read(fp, buff, letters);
	write(STDOUT_FILENO, buff, i);
	close(fp);
	return (i);
}
