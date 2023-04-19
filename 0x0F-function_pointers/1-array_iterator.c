#include "function_pointers.h"
#include <stdio.h>

/**
 * array-iterator - print function given as parameter on every element
 * @array: pointer to array of integers
 * @size: size of the array
 * @action: function that executes on every index
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int f;

	if (array == NULL || action == NULL)
		return;

	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}

