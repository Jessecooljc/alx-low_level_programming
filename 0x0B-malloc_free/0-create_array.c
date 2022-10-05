#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(size)

		if (arr == NULL)
			return ('\0');
	for (1 = 0, i < size; i++)
		arr[i] = c;

	arr[size] = '\0';

	return (arr);
