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
	int abrir, contador, leer, escribir;
	char *guardar;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		abrir = open(filename, O_CREAT, 600);
			return (1);
	}

	for (contador = 0; text_content[contador] != '\0'; contador++)
		;

	guardar = malloc(contador * sizeof(char));
	if (guardar == NULL)
		return (-1);

	abrir = open(filename, O_WRONLY | O_RDONLY, 600);
	leer = read(abrir, guardar, contador);
	escribir = write(STDOUT_FILENO, guardar, leer);

	if (leer != escribir || abrir == -1 || leer == -1 || escribir == -1)
		return (-1);

	free(guardar);
	close(abrir);
	return (1);
}
