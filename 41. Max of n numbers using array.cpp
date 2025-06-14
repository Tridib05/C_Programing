#include <stdio.h>
int main ()
{
	int a[ ]={40,35,90,2,28,12};
	int i,max;
	max=a[0];
	for (i=0;i<6;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
		printf ("the max no is =%d",max);
	return 0;
}