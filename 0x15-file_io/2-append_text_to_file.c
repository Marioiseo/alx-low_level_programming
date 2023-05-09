#include "main.h"
/**
 * append_text_to_file - the name is descriping
 * @filename: just read it
 * @text_content: same .-.
 * Return: either 1 for success nor -1 for failures
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int i;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND | O_EXCL, 0600);
	if (fp == -1)
		return (-1);
	i = strlen(text_content);
	if (!i)
		return (1);
	write(fp, text_content, i);
	close(fp);
	return (1);
}
