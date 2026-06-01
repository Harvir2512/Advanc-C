#include<stdio.h>
void main()
{
	int a[]={10,20,30,40,50};
	int b[]={60,70,80};
	int c[]={90,100};
	
	int *x[3];
	
	x[0]=a;
	x[1]=b;
	x[2]=c;
	
	printf("%d",x[2][1]);
}
