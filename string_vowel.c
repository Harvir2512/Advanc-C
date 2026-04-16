#include<stdio.h>
void main()
{
	char s1[]={'h','a','r','v','i','r'};
	int i;
	
	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]=='A' || s1[i]=='a' || s1[i]=='E' || s1[i]=='e' || s1[i]=='I'
		|| s1[i]=='i' || s1[i]=='O' || s1[i]=='o' || s1[i]=='U' || s1[i]=='u')
		{
			printf("%c",s1[i]);
		}
	}
}
