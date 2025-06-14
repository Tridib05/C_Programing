#include <stdio.h>
int main () 
{
	int choice,p,b,f,m,pizza,burger,french_fries,momo;
	printf ("1.pizza \n 2.burger \n 3.french_fries \n 4.momo \n");
	printf ("please select your choice froom 1,2,3,4");
	scanf ("%d", & choice);
	switch(choice) 
	{
		case 1:
			printf ("you selected pizza");
			printf ("please selected quantity");
			scanf ("%d", &p);
			pizza= 70*p;
			printf ("your bill is %d", pizza);
			break;
		case 2:
			printf ("you selected burger");
			printf ("please selected quantity");
			scanf ("%d", &b);
			burger= 40*b;
			printf("your bill is %d", burger);
			break;
		case 3:
			printf ("you selected french_fries");
			printf ("please selected quantity");
			scanf ("%d", &f);
			french_fries=45*f;
			printf ("your bill is %d", french_fries);
			break;
		case 4:
			printf ("you selected momo");
			printf ("please selected quantity");
			scanf ("%d", &m);
			momo= 50*m;
			printf ("your bill is %d", momo);
			break;
		default:
		printf ("invalid input");
	}
	return 0;
}