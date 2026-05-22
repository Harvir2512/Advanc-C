#include<stdio.h>
struct student
{
	int sno;
	char sname[30];
	float per;
};
struct student s1[20];
void main()
{
	int index=0,i,n;
	float max;
	
	printf("enter limit :");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		
		printf("enter sno :");
		scanf("%d",&s1[i].sno);
		printf("enter sname :");
		scanf("%s",s1[i].sname);
		printf("enter persantage :");
		scanf("%f",&s1[i].per);
	}
	max=s1[0].per;
	for(i=0; i<n; i++)
	{
		if(s1[i].per>max)
		{
			max=s1[i].per;
			index=i;
		}
	}
	printf("\nstudent sno :%d",s1[index].sno);
    printf("\nstudent sname :%d",s1[index].sname);
    printf("\nstudent persantage :%d",s1[index].per);
}
