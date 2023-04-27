#include "main.h"


int print_last_digit(int n )
{
	 int m;
	 int i=0;
	 if (n>=0)
		 m=n;
	 else 
		 m=-n;
	 while(i<=10000)
	 {
	 if (m<=i+10 && m>=i)
	 {
		 return( m%i);
	 } 
	else 
		i+=10;
        }
     return(0);
}
