#include "main.h"
/**
 * get_endianness - gets endianess of an int
*Return:0 if big endian else 1
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;
if (*c)
	return (1);
else
	return (0);
}
