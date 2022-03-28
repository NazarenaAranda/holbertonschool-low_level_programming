#include "main.h"
/**
  * create_file - Create a function that creates a file
  * @filename:  is the name of the file to create
  * @text_content: is a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure (file can not be created,
*file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int abrir, contador, escribir;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (contador = 0; text_content[contador] != '\0'; contador++)
		;


	abrir = open(filename, O_CREAT | O_WRONLY | O_RDONLY | O_TRUNC, 0600);
	escribir = write(abrir, text_content, contador);

	if (abrir == -1 || escribir == -1)
		return (-1);

	close(abrir);
	return (1);
}
