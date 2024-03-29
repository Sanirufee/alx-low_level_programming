#include "main.h"
#include <stdlib.h>
/**
 * create_array - a program that creates a dynamic memory allocation
 *  filled with a specific character c .
 *   @size : size of an array.
 *   @c: character.
 *    Return: If size == 0 or the function fails - NULL.
 *     Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
