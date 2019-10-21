#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Create a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: Longer description
 */
typedef struct dog
{
	char * name;
	float age;
	char * owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG _H */
