#include "main.h"
/**
 * read_textfile - Read text from a file and print it
 * @filename:string
 * @letters:size_t
 * Return:Read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, rd, wr;
char *s;
s = malloc(sizeof(char) * letters);

if (filename == NULL)
	return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
	return (0);
rd = read(fd, s, letters);
if (rd == -1)
	return (0);
wr = write(STDOUT_FILENO, s, rd);
if (wr == -1)
	return (0);
close(fd);
free(s);
return (wr);
}

