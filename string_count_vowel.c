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
		if(s1[i]=='A' || s1[i]=='a' || s1[i]=='E' || s1[i]=='e' || s1[i]=='I' || s1[i]=='I' ||
		s1[i]=='O' || s1[i]=='o' || s1[i]=='U' || s1[i]=='u')
		{
			count++;
		}
	}
	printf("count the vowel of string=%d",count);
}
