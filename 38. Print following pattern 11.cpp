#include <stdio.h>
int main ()
{
	int i,j,k,l,n;
	printf ("\n enter the no of rows");
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=i;j<n;j++)
		printf (" ");
		for (k=0;k<=i;k++)
		printf ("*");
		for (l=0;l<i;l++)
		printf ("*");
		printf ("\n");
	}
	return 0;
}