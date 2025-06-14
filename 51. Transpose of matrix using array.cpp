#include <stdio.h>
int main ()
{
	int i,r,c,j,matrix[10][10],transpose [10][10];
	printf ("enter rows and columns:\n");
	scanf ("%d %d",&r,&c);
	printf ("enter elements of the matrix:\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf ("%d",&matrix[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			transpose [j][i]=matrix[i][j];
		}
	}
	printf ("transpose of the matrix:\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf ("%d\t",transpose [i][j]);
			printf ("\n");
		}
	}
	return 0;
}