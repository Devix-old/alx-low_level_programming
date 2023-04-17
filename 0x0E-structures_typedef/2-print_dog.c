#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints information about a dog
 * @d: pointer to a struct dog containing the dog's information
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
