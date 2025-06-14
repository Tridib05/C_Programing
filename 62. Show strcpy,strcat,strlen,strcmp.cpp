#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[10];
	char str2[10];
	char str3[ ]="apple";
	char str4[10];
	printf ("enter string 1:");
	gets (str1);
	printf ("enter string 2:");
	gets (str2);
	strcat (str1,str2);
	printf ("\n");
	printf ("joining word =");
	puts (str1);
	printf ("\n");
	printf ("length of string =%d\n",strlen(str1));
	printf ("\n");
	printf ("original word =%s\n",str3);
	printf ("\n");
	printf ("copy word=");
	strcpy (str4,str3);
	puts (str4);
	return 0;
}