#include <stdio.h>
int main ()
{
	int a[ ]={40,35,90,2,28,12};
	int i,min;
	min=a[0];
	for (i=0;i<6;i++)
	{
		if (min>a[i])
		{
			min=a[i];
		}
	}
		printf ("the min no is =%d",min);
	return 0;
}