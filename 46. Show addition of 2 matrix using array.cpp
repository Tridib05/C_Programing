#include <stdio.h>
int main ()
{
	int a[3][3]={{1,2,3},{1,4,6},{2,4,9}};
	int b[3][3]={{1,0,0},{1,9,2},{3,1,6}};
	int i,j,sum[3][3];
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("\t %d",sum[i][j]);
		}
		printf ("\n");
	}
	return 0;
}