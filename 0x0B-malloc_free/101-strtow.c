#include "main.h"

/**
 * allocate_mem - allocates memory for a string.
 * @arr: An array of strings to be freed is function fails
 * @len: the size of the memory.
 * Return: pointer to the allocated memory.
 */
char *allocate_mem(char **arr, int len)
{
	char *ptr;

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		free(arr);
		return (NULL);
	}
	return (ptr);
}

/**
 * allocate_array - allocates memory for an array of strings.
 * @len: the size of the array.
 * Return: the pointer to the allocated memory.
 */
char **allocate_array(int len)
{
	char **arr;

	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		return (NULL);
	return (arr);
}

/**
 * strtow - splits a string into words.
 * @str: the string to be splitted.
 * Return: pointer to an array of strings that was allocated.
 */
char **strtow(char *str)
{
	char **ptr, *store = NULL, *word;
	int word_count, word_index = 0, i, j, lent;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	word_count = (*str == ' ') ? 0 : 1;
	for (i = word_count; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			word_count++;
	}
	ptr = allocate_array(word_count);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && store == NULL)
			store = &str[i];
		else if (str[i] == ' ' && store != NULL)
		{
			lent = &str[i] - store;
			word = allocate_mem(ptr, lent);
			for (j = 0; j < lent; j++)
				word[j] = store[j];
			word[lent] = '\0';
			ptr[word_index] = word;
			word_index++;
			store = NULL;
		}
	}
	if (store != NULL)
	{
		lent = &str[i] - store;
		word = allocate_mem(ptr, lent);
		for (j = 0; j < lent; j++)
			word[j] = store[j];
		word[lent] = '\0';
		ptr[word_index] = word;
		word_index++;
	}
	ptr[word_index] = NULL;
	return (ptr);
}
