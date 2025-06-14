#include <stdio.h>
int main ()
{
	int n,i,num,sum=0;
	printf ("enter how many numbers you want to take");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf ("enter numbers %d",i);
		scanf ("%d",&num);
		sum=sum+num;
	}
	printf ("the summation of %d numbbers is =%d",n,sum);
	return 0;
}