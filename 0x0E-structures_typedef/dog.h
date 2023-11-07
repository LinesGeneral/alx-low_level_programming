#ifndef DOG_H
#define DOG_H

/**
* struct dog - new struct type
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: this struct takes name, age and owneer of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
