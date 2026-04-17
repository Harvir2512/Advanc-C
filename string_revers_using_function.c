#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10];
	
	printf("enter string :");
	gets(s1);
	strrev(s1);
	printf("\nrevers string=%s",s1);
}
