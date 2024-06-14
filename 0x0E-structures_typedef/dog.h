#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Short description
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 * Description : a new struct for dogs.
 */
struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif