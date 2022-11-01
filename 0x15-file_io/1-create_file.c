#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: filename to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on sucess, -1 if file cant be created, nor written
 * nor fails
 */

int create_file(const char *filename, char *text_content)
{
	int fdop, fdwr, len = 0;

	if (filename == NULL)
		return (-1);

	fdop = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdop < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fdwr = write(fdop, text_content, len);
	close(fdop);
	if (fdwr < 0)
		return (-1);
	return (1);
}
