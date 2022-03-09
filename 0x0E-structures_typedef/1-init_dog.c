#include <stdio.h>
#include "dog.h"
/**
* init_dog - functions
* @d: jsadb
* @name: sdb
* @age: jsd
* @owner: sadjv
* Return: sbdajk
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
