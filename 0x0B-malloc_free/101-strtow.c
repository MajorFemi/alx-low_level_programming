#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates index marking the end of
 * first word present in the string
 *
 * @str: String to be searched
 *
 * Return: index signifying end of word
 */

int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * count_words - count words
 * @str: string to be searched
 *
 * Return: count
 */

int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}

/**
 * strtow - splits string into words
 * @str: string
 *
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	char **my_str;
	int i = 0, words, f, letters, e;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	my_str = malloc(sizeof(char *) * (words + 1));
	if (my_str == NULL)
		return (NULL);

	for (f = 0; f < words; f++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		my_str[f] = malloc(sizeof(char) * (letters + 1));

		if (my_str[f] == NULL)
		{
			for (; f >= 0; f--)
				free(my_str[f]);

			free(my_str);
			return (NULL);
		}

		for (e = 0; e < letters; e++)
			my_str[f][e] = str[i++];

		my_str[f][e] = '\0';
	}
	my_str[f] = NULL;

	return (my_str);
}

