#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure representing basic dog information
 *
 * @name: Pointer to a character string containing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to a character string containing the name of the owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
/*delclarion of init_dog function*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
