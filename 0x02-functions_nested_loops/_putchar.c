#include <unistd.h>
/**
 * _putchar - writes the character f to stdout
 * @f: The character to print
 *
 * Return: 1
 */
int _putchar(char f)
{
	return (write(1, &f, 1));
}
