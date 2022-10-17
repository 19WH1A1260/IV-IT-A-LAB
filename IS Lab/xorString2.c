#include<stdio.h>
#include<string.h>
void main()
{
	char s[] = "HelloWorld";
	char s1[11];
	char s2[11];
	int n = strlen(s);
	for(int i=0;i<n;i++)
	{
		s1[i] = s[i]&127;
		printf("%c", s1[i]);
		//s2[i] = s[i]^127;
	}
	printf("\n");

       for(int i=0;i<n;i++)
       {
	       s2[i] = s[i]^127;
	       printf("%c", s2[i]);
       }
       printf("\n");
}
