#include <stdio.h>
int main ()
{
	int weak;
	printf ("Enter the number 1-7");
	scanf ("%d", &weak);
	switch (weak)
	{
		case 1: printf ("sunday");
		        break;
		case 2: printf ("monday");
		        break;
		case 3: printf ("tuesday");
		        break;
		case 4: printf ("wednesday");
		        break;
		case 5: printf ("thurshday");
		        break;
		case 6: printf ("friday");
		        break;
		case 7: printf ("saturday");
		        break;
		default:
		printf ("invalid input");
	}
	return 0;
}