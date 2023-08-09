#include "main.h"

/**
 * create_file - file
 * @filename: name
 * @text_content: content
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fk;
	int nl;
	int rwr;

	if (!filename)
		return (-1);

	fk = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fk == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	rwr = write(fk, text_content, nl);

	if (rwr == -1)
		return (-1);

	close(fk);

	return (1);
}
