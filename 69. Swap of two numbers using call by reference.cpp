#include <stdio.h>
void swapx (int *,int *);
int main ()
{
	int a=10,b=20;
	swapx (&a,&b);
	printf ("In caller a =%d and b =%d",a,b);
	return 0;
}
void swapx (int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf ("Inside function x =%d and y =%d\n",*x,*y);
}