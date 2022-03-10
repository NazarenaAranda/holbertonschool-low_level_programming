#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* free_dog - free
* @d: pointer
* Description: free dogs
*/
void free_dog(dog_t *d)
{
	dog_t *my_dog = d;
		if (d)
		{
			free(my_dog->name);
			free(my_dog->owner);
			free(my_dog);
		}
}
