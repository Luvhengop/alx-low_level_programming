#include <stdlib.h>

/**
   * array_range - creates an array of integers, ordered from @min to @max
   * @min: first and minimum value of the array to be created
   * @max: last and maximum value of the array to be created
   *
   * Return: pointer to the newly created array (SUCCESS) or
   * NULL if @min > @max (FAILURE) or
   * NULL if insufficient memory was available (FAILURE)
 */

int *array_range(int min, int max)

{

	int *ptr;

	int i, size;



	if (min > max)

		return (NULL);



	size = max - min + 1;



	ptr = malloc(sizeof(int) * size);



	if (ptr == NULL)

		return (NULL);



	for (i = 0; min <= max; i++)

		ptr[i] = min++;



	return (ptr);

}
