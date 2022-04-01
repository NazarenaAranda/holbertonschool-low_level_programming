#include "main.h"
#include <string.h>
/**
*append_text_to_file - function that appends text at the end of a file.
*@filename: is the name of the file.
*@text_content: is the NULL terminated string to add at the end of the file
*Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int abrir;

	abrir = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL || abrir == -1)
		return (-1);

	if (text_content != NULL)
		write(abrir, text_content, strlen(text_content));

	close(abrir);
	return (1);
}
