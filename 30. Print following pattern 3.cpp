#include <stdio.h>
int main ()
{
	int row=5,i;
	for (i=0;i<row;i++)
	{
	  for (int j=0;j<=i;j++)
	 {
	    printf ("%c",'A'+j);
     }
      printf ("\n");
    }
    return 0;
}