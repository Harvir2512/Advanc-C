#include<stdio.h>
void main()
{
	char s1[50];
	int count=0,i;
	printf("enter string :");
	scanf("%s",s1);
	
	for(i=0; s1[i]!='\0'; i++)
	{
		count++;
	}
	printf("%d",count);
}
