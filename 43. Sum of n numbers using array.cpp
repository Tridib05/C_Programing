#include <stdio.h>
int main ()
{
	int a[ ]={32,57,62,77,81,99};
	int i,s=0;
	for (i=0;i<6;i++)
	{
		s+=a[i];
	}
	printf ("the sum of n numbers is=%d",s);
	return 0;
}