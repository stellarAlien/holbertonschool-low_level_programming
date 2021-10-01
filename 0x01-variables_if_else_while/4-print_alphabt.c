#include<time.h>
#include<stdlib.h>
#include<stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
char i = 'a';
do {
if (i == 'e' || i == 'q')
{
i++;
}
else
{
putchar(i);
i++;
}
} while(i <= 'z');
putchar('\n');
return (0);
}
