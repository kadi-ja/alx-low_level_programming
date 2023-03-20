#ifndef DOG_H
#define DOG_H
/**
* struct dog - a structure of dog's info
* @name: 1st member is a name
* @age: 2nd member is the age
* @owner: 3rd member is the owner name
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
*dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif