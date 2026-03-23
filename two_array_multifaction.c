#include<stdio.h>
void main()
{
	int a[5],b[50],c[5],i;
	printf("\nenter frist array elemants\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter second array elemants\n");
	for(i=0; i<5; i++)
	{
	    scanf("%d",&b[i]);
	}
	printf("\nstore threed array elemants\n");
	for(i=0; i<5; i++)
	{
		c[i]=a[i]*b[i];
	}
	printf("\nprint threed array elemants\n");
	for(i=0; i<5; i++)
	{
		printf(" %d",c[i]);
	}
}

