#include<stdio.h>
void main()
{
	char s1[20],s2[20],ans[50];
	int i,j,cnt=0;
	
	printf("enter first string :");
	scanf("%s",s1);
	
	printf("enter secoud string :");
	scanf("%s",s2);
	
	for(i=0; s1[i]!='\0'; i++)
	{
		ans[cnt++]=s1[i];
	}
	printf("%s",ans);
	
	for(i=0; s2[i]!='\0'; i++)
	{
		ans[cnt]=s2[i];
		cnt++;
	}
	ans[cnt]='\0';
	printf("connect string=%s",ans);
}
