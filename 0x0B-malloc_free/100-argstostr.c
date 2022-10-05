#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of your program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: Pointer to string that contains all arguments
 */

char *argstostr(int ac, char **av)
{
	char *my_str;
	int len = 0, f = 0, e, m = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (; f < ac; f++)
	{
		for (e = 0; av[f][e]; e++)
			len++;
		len++;
	}
	len++;

	my_str = malloc(len * sizeof(char));
	if (my_str == NULL)
		return (NULL);

	for (f = 0; f < ac; f++)
	{
		for (e = 0; av[f][e]; e++)
		{
			my_str[m] = av[f][e];
			m++;
		}
		my_str[m] = '\n';
		m++;
	}

	my_str[m] = '\0';

	return (my_str);
}
