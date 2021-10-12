#include "main.h"
#include<string.h>
int _atoi(char *s)
{
/*
 *@a
*/ 
int i,a;
switch (s[i])
{
	 case('\0')
	  {
		   break;
		    }
	   case ('-'):
	   a = 0;
	    i++;
	     case(+):
	     a = 1;
	      i++;
	       case ('0' ... '9'):
	       if(a)
	       {
		       printf("%d", s[i]-48);
		       i++;
	       }
	       else 
	       {
printf("-%d", s[i]-48);
}
default :
{
i++;
continue ;
}
}

