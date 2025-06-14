#include <stdio.h>
int main ()
{
	int a,b,c;
	printf ("enter 3 numbers");
	scanf ("%d %d %d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		{
			printf ("the max no in %d",a);
		}
		else
		{
			printf ("the max no in %d",c);
		}
	}
    else
    {
        if (b>c)
		{
			printf ("the max no in %d",b);
		}
		else
		{
			printf ("the max no in %d",c);
		}
    }
	return 0;
}