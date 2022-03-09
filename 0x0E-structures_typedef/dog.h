#ifndef TYPE_H
#define TYPE_H
/**
* struct dog - fvsd
* @name: sdjdf
* @age: sadj
* @owner: kdjwvb
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
