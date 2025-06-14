#include <stdio.h>
int main()
{
	int n,i,s=0;
	printf ("enter no");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		s+=i;
	}
	printf ("the sum of n numbers is =%d",s);
	return 0;
}