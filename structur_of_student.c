#include<stdio.h>
struct harvir
{
	int sno;
    char sname[20];
    float per;
};
struct harvir h1;
void main()
{
	printf("enter sno :");
	scanf("%d",&h1.sno);
	
	printf("enter sname :");
	scanf("%s",h1.sname);
	
	printf("enter persantege :");
	scanf("%f",&h1.per);
	
	printf("\nstudent sno=%d",h1.sno);
	printf("\nstudent name=%s",h1.sname);
	printf("\nstudent persantege=%.2f",h1.per);
}
