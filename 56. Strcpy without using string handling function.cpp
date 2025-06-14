#include <stdio.h>
#include <string.h>
int main()
{
	char str1[ ]="C program";
	char str2[20];
	int i;
	for (i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	puts(str2);
	return 0;
}