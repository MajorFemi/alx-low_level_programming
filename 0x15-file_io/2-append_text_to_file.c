#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end
 * @filename: filename to open and append
 * @text_content: NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created,
 * written, nor fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdop, fdwr, len = 0;

	if (filename == NULL)
		return (-1);

	fdop = open(filename, O_RDWR | O_APPEND);
	if (fdop < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fdop);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fdwr = write(fdop, text_content, len);
	close(fdop);
	if (fdwr < 0)
		return (-1);

	return (1);
}
