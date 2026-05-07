#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10];
	int count=0,i;
	printf("enter string :");
	gets(s1);
	
	for(i=0; s1[i]!='\0'; i++)
	{
		count++;
	}
	printf("count string=%d",count);
}
