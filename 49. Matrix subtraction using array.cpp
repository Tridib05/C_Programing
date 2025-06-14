#include <stdio.h>
int main ()
{
	int r,c,a[50][50],b[50][50],sub[50][50],i,j;
	printf ("Enter the no of rows (between 1 to 50)");
	scanf ("%d",&r);
	printf ("Enter the no of columns (between 1 to 50)");
	scanf ("%d",&c);
	printf ("Enter elements of 1st matrix\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf ("Enter element a is %d %d",i+1,j+1);
		scanf ("%d",&a[i][j]);
	}
	printf ("Enter elements of 2nd matrix\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf ("Enter element b is %d %d",i+1,j+1);
		scanf ("%d",&b[i][j]);
	}
	for (i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		sub[i][j]=a[i][j]-b[i][j];
	}
	printf ("sub of two matrices\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf(" %d",sub[i][j]);
		if(j==c-1)
		{
			printf ("\n");
		}
	}
	return 0;
}