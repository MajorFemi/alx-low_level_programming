#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and print to POSIX STDOUT
 * @filename: Filename to open
 * @letters: number of letters to read an print
 * Return: number of letters read and printed, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdop, fdre, fdwr;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	fdop = open(filename, O_RDONLY);
	if (fdop < 0)
	{
		free(temp);
		return (0);
	}

	fdr = read(fdop, temp, letters);
	if (fdre < 0)
	{
		free(temp);
		return (0);
	}

	fdwr = write(STDOUT_FILENO, temp, fdre);
	free(temp);
	close(fdop);

	if (fdwr < 0)
		return (0);
	return ((ssize_t)fdwr);
}
