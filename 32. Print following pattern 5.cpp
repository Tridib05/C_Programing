#include <stdio.h>
int main ()
{
	int i,j;
	for (i=0;i<=2;i++)
	{
		printf ("\n");
		for (j=0;j<=i;j++)
		printf ("%d",j);
	}
	return 0;
}