#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog_t structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the newly created dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int len_name, len_owner;
char *name_copy, *owner_copy;
dog_t *my_dog;
len_owner = strlen(owner);
len_name = strlen(name);
if (name == NULL || owner == NULL)
{
return (NULL);
}
my_dog = malloc(sizeof(my_dog));
if (my_dog == NULL)
{
return (NULL);
}
name_copy = malloc(sizeof(char) * (len_name + 1));
if (name_copy == NULL)
{
free(my_dog);
return (NULL);
}
owner_copy = malloc(sizeof(char) * (len_owner + 1));
if (owner_copy == NULL)
{
free(name_copy);
free(my_dog);
return (NULL);
}
strcpy(name_copy, name);
name_copy[len_name] = '\0';
strcpy(owner_copy, owner);
owner_copy[len_owner] = '\0';
my_dog->name = name_copy;
my_dog->owner = owner_copy;
my_dog->age = age;
return (my_dog);
}
