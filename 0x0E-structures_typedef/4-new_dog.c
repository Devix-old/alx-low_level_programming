#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog_t structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
my_dog = malloc(sizeof(new_dog));
if (my_dog == NULL)
{
    return (NULL);
}
my_dog->name = name;
my_dog->age = age;
my_dog->owner = owner;
return (my_dog);
}
