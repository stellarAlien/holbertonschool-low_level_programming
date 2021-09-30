#include<stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
int i;
float x;
char c;
long int li;
long long int lli;
	printf("Size of a char: %u byte(s)\n",sizeof(char));
        printf("Size of an int: %u byte(s)\n",sizeof(int));
	printf("Size of a long int: %u byte(s)\n",sizeof(long int));
	printf("size of a long long int: %u byte(s)\n",sizeof(long long int));
	printf("Size of a float: %u byte(s)\n",sizeof(float));	
}

