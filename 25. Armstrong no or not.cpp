#include <stdio.h>
int main ()
{
	int n,s=0,i,t;
	printf ("enter no");
	scanf ("%d",&n);
	t=n;
	while (n>0)
	{
		i=n%10;
		s=s+(i*i*i);
		n=n/10;
	}
		if (s==t)
		printf ("armstrong no");
		else
		printf ("not armstrong no");
	return 0;
}