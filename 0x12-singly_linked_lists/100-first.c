#include <stdio.h>

void construct(void) _attribute_ ((constructor));

/**
 *  * Construct- Prints a string before the
 *        main function is executed.
 */

void construct(void)
{
	    printf("You're beat! and yet, you must allow,\n");
	        printf("I bore my house upon my back!\n");
}
