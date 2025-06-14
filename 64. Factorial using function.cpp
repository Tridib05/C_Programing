#include <stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return (n*fact(n-1));
}
int main ()
{
	int n,factorial;
	printf ("enetr no:");
	scanf ("%d",&n);
	factorial=fact(n);
	printf ("the factorial of given number is =%d",factorial);
	return 0;
}