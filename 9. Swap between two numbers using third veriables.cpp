#include <stdio.h>
int main ()
{
	int a,b,c;
	a=10;
	b=20;
	c=a;
	a=b;
	b=c;
	printf ("after swapping value in %d %d", a,b);
	return 0;

}