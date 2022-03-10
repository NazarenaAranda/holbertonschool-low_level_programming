#include <stdlib.h>
#include "dog.h"
/**
* new_dog - sasd
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Description:  creates a new dog
* Return: sa
*/
 dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;
	char *namee, *ownerr;
	int a = 0, b =0, c;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	while (*(name + a) != '\0')
		a++;
	while (*(owner + b) != '\0')
		b++;
	namee = malloc(sizeof(char) * (a + 1));
	if (namee == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	ownerr = malloc(sizeof(char) * (b + 1));
	if (ownerr == NULL)
	{
		free(my_dog);
		free(namee);
		return (NULL);
	}

	for (c = 0; c <= a; c++)
	{
		*(namee + c) = *(name + c);
	}
	for (c = 0; c <= b; b++)
	{
		*(ownerr + c) = *(owner + c);
	}
	my_dog->name = namee;
	my_dog->age = age;
	my_dog->owner = ownerr;
	return (my_dog);
}
