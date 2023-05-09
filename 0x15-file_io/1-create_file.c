#include "main.h"
/**
 * create_file - create file using system calls
 * @filename: the name of it
 * @text_content: the text inside
 * Return: either 1 nor -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int i;

	if (!filename)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	i = strlen(text_content);
	if (!i)
		return (1);
	write(fp, text_content, i);
	close(fp);
	return (1);
}
