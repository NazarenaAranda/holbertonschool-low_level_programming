#include "main.h"
/**
  * read_textfile - read file
  * @filename: file read
  * @letters: ksd
  * Return: actual number of letters it could read and print
*if the file can not be opened or read, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t abrir,leer, escribir;
	char *guardar;

	guardar = malloc (sizeof(char) * letters);
	if (guardar == NULL)
		return (0);
	else
	{
		abrir = open(filename, O_RDONLY);
		leer = read(abrir, guardar, letters);
		escribir = write(STDOUT_FILENO, guardar, leer);
	}
	if (abrir == -1 || leer == -1 || escribir == -1)
		return (0);
	free(guardar);
	return (escribir);
}
