#include "dog.h"
/**
 * init_dog - Initializes the struct dog
 * @d: Pointer to the struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner of the dog
 *
 * Description: Initializes the values of a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d){
d->name = name;
d->age = age;
d->owner = owner;
}
}

