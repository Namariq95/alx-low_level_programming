#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: owner of the dog
  *
  * Return: pointer to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n1, ol, i;

	dog_t 8dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t))
	if (dog == NULL)
		return (NULL);
	for (n1 = 0; name[n1]; n1++)
		;
	n1++;
	dog->name = malloc(n1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->woner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
