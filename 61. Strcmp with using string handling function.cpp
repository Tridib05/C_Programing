#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[ ]="Global";
	char str2[ ]="Institute";
	int i,j,k;
	i= strcmp(str1,"global");
	j= strcmp(str1,str2);
	k= strcmp(str1,"Global Institute");
	printf ("%d %d %d \n",i,j,k);
	return 0;
}