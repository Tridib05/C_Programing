#include <stdio.h>
int main ()
{
	int a[3][3]={{1,2,4},{2,4,8},{3,5,7}};
	int b[3][3]={{1,2,0},{3,9,4},{2,4,8}};
	int i,j,sub[3][3];
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("\t %d",sub[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
