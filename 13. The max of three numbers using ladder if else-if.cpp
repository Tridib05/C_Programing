#include <stdio.h>
int main ()
{
	int a,b,c;
	printf ("enter 3 numbers");
	scanf ("%d %d %d",&a,&b,&c);
	if ((a>b)&&(a>c))
	{
		printf ("the max no in %d",a);
	}
	else if ((b>a)&&(b>c))
	{
		printf ("the max no in %d",b);
	}
	else if ((c>a)&&(c>b))
	{
		printf ("the max no in %d",c);
	}
	return 0;
}