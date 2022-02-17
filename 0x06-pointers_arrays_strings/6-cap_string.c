#include "main.h"

/**
* cap_string - Poner una cadena en mayusculas
* Description: Esta función pone en mayúscula una
* cadena. Separadores de palabras:
* Espacio, tabulación, nueva línea, ',', ';', '.', '!', '?', '"', '(', ')'
* '{', '}'
* @s: Cadena para poner en mayus
* Return: @s en mayusculas
*/

char *cap_string(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if ((s[c - 1] == ' ') || (s[c - 1] == '\t') || (s[c - 1] == '\t') ||
		(s[c - 1] == '\n') || (s[c - 1] == ',') || (s[c - 1] == ';') ||
		(s[c - 1] == '.') || (s[c - 1] == '!') || (s[c - 1] == '?') ||
		(s[c - 1] == '"') || (s[c - 1] == '(') || (s[c - 1] == ')') ||
		(s[c - 1] == '{') || (s[c - 1] == '}'))
		{
			if (s[c] >= 97 && s[c] <= 122)
				s[c] -= 32;
		}
		c++;
	}
	return (s);
}
