#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gives length of a string
 * @str: given string
 *
 * Return: integer length
 */

int _strlen(char *s)
{
	int f;

	f = 0;

	while (s[f] != '\0')
	{
		f++;
	}

	return (f);
}
/**
 * cpystr - copies string from the src to destination
 * @src: src string
 * @dest: destination string
 *
 * Return: pointer to the copied string
 */

char *_strcpy(char *dest, char *src)

{
	int len, f;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (f = 0; f < len; f++)
	{
		dest[f] = src[f];
	}
	dest[f] = '\0';

	return (dest);
}
/**
 * new_dog - creates a dog by coying name and owner
 * @name: string holding the name of the dog
 * @age: float var holding the age
 * @owner: string var holding the name of owner
 *
 * Return: pointer to dog if success, NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
