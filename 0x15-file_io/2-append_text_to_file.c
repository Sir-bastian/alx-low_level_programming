#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add to the end of the file
 * Return: if the function fails or filename is NULL - -1.
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int letters;
	int wr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)

		wr = write(file_d, text_content, letters);

		if (wr == -1)
		{
			return (-1);
		}
	}

	close(file_d);

	return (1);
}
