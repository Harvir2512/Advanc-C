#include<stdio.h>
void main()
{
	char s1[20],i;
    
    printf("enter string :");
	scanf("%s",s1);
	
	for(i=0; s1[i]!='\0'; i++)
	{
		if(i%2==0)
		{
			printf("%c",s1[i]);
		}
	}
		
}
