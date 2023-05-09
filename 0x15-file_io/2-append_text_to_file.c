#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
*append_text_to_file - appends text to a file
*@filename: Pointer to name of file
*@text_content: string to add to end of file
*
*Return: If filename is NULL return -1
*		Return 1 if the file exists
*		-1 if the file does not exist or
*				if you do not have the required permissions to write the file
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
