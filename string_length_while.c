#include<stdio.h>
void main()
{
	char s1[5];
	int i=0,cnt=0;
	
	printf("enter string :");
	scanf("%s",s1);
	
	while(s1[i]!='\0')
	{
		i++;
		cnt++;
	}
	printf("string length=%d",cnt);
}
