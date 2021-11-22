#include"main.h"
/**
 * create_file - creates a file and truncates it
 * @filename: name of file
 * @text_content: content to truncate
 * Return: 1 if success else -1
 */
int create_file(const char *filename, char *text_content)
{
int f, w, len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (; text_content[len];)
	len++;
}
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(f, text_content, len);
if (w == -1)
return (-1);
close(f);
return (1);
}
