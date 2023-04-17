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
char NIL[5] = "(nil)";
if (d == NULL)
return;
if (d->name == NULL)
d->name = NIL;
if (d->owner == NULL)
d->owner = NIL;
if (d->age == 0)
{
printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, NIL, d->owner);
}
else
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
