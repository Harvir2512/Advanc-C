#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],ch;
	int i,count=0;
	printf("enter string :");
	gets(s1);
	printf("enter occurrences :");
	scanf("%c",&ch);
	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]==ch)
		{
			count++;
		}
	}
	printf("count of occurrences=%d",count);
}
