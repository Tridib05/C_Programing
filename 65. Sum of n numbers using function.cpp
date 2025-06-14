#include <stdio.h>
int nsum (int n)
{
	if (n==0)
	{
		return 0;
	}
	int result=n+nsum(n-1);
	return result;
}
int main()
{
	int n=5;
	int sum=nsum (n);
	printf ("sum of first %d natural numbers %d",n,sum);
	return 0;
}