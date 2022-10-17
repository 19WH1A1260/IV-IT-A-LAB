#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	//char str[11];
	char str[11] = "HelloWorld";
	char str1[11];
	int i, n;
	n = strlen(str);
	for(int i=0;i<n;i++)
	{
		str1[i]=str[i]^0;
		printf("%c", str1[i]);
	}
	printf("\n");
	
}
