#ifndef DOG_H
#define DOG_H
/**
 *struct dog - typedef for a struct
 *@name: first member
 *@owner: second member
 *@age: third member
 *Description: data strcture for a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;

};
/**
 *struct dog - typedef for dog
 */
typedef struct dog *d;
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
