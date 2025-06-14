#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[50],str2[50];
	int i=0,j=0;
	printf ("enter 1st string:");
	gets (str1);
	printf ("enter 2nd string:");
	gets (str2);
	while (str1[i]!='\0')
	i++;
	while (str2[j]!='\0')
	{
	  str1[i]=str2[j];
	  j++;
	  i++;
    }
    str1[i]='\0';
    printf ("merge string is=%s",str1);
	return 0;
}