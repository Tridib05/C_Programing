#include <stdio.h>
int main ()
{
	int n,r,s=0,t;
	printf ("enter no");
	scanf ("%d",&n);
	t=n;
	while (n>0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
		if (s==t)
		printf ("palindrome no");
		else 
		printf ("not palindrome no");
	return 0;
}