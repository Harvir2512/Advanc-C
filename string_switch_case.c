#include<stdio.h>
#include<string.h>
void main()
{
	int ch;
	printf("press 1:palidorme or not");
	printf("\npress 2:check which is greater");
	printf("\npress 3:check string quale our not");
	printf("\npress 4:count of vowels in the string");
	printf("\npress 5:performe concatention");
	printf("\nenter your string choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				char s1[20],s2[20];
				printf("enter string :");
				scanf("%s",s1);
				strcpy(s2,s1);
				strrev(s1);
				if(strcmp(s1,s2)==0)
			    {
				    printf("\nstring is palidorme");
			    }
				else
				{
				   printf("\nstring is not palidorme");
			    }
			    break;
			}
		case 2:
			{
				char s1[20],s2[20];
				int cmp;
				printf("enter 1st string :");
				scanf("%s",s1);
				printf("enter 2nd string :");
				scanf("%s",s2);
				cmp=strcmp(s1,s2);
				if(cmp>0)
				{
					printf("1st string is greater");
				}
				else if(cmp<0)
				{
					printf("2nd string is greater");
				}
				break;
			}
		case 3:
			{
				char s1[20],s2[20];
				printf("enter 1st string :");
				scanf("%s",s1);
				printf("enter 2nd string :");
				scanf("%s",s2);
				if(strcmp(s1,s2)==0)
				{
					printf("string is equal");
				}
				else
				{
					printf("string is not equal");
				}
				break;
			}
		case 4:
			{
				char s1[20];
				int count=0,i;
				printf("enter string :");
				scanf("%s",s1);
            	for(i=0; s1[i]!='\0'; i++)
            	{
		          if(s1[i]=='A' || s1[i]=='a' || s1[i]=='E' || s1[i]=='e' || s1[i]=='I'
	            	|| s1[i]=='i' || s1[i]=='O' || s1[i]=='o' || s1[i]=='U' || s1[i]=='u')
		           {
			      count++;
			       }
		        }
		        printf("count of vowel=%d",count);
		        break;
	        }
			
		case 5:
			{
				char s1[20],s2[20];
				printf("enter 1st string :");
				scanf("%s",s1);
				printf("enter 2nd string :");
				scanf("%s",s2);
				strcat(s1,s2);
				printf("concatention of two string=%s",s1);
				
				
			}
	}
}
