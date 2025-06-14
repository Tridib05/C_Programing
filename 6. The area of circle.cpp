#include <stdio.h>
int main ()
{
	float radius,area;
	printf ("enter the value of radius");
	scanf ("%f", & radius);
	area = 3.14*radius*radius;
	printf ("the area of circle in =%f",area);
	return 0;
}