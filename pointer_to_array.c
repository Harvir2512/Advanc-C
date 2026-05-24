#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int (*p)[5];
	
	p=&a;
	
	printf("%d",(*p)[2]);
}
