#include<stdio.h>
#include<string.h>
void main()
{
	int i,n,n1,s2[10],cmp;
	printf("enter string limit :");
	scanf("%d",&n);
	printf("enter length strig :");
	scanf("%d",&n1);
	char s1[n][n1];
	for(i=0; i<n; i++)
	{
		scanf("%s",s1);
	}
	printf("enter string :");
	scanf("%s",s2);
	for(i=0; i<n; i++)
	{
		if(strcmp(s1[i],s2[i])==0)
		{
			printf("string is found");
		}
	}
	printf("string not found");
}
