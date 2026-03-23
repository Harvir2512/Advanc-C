#include<stdio.h>
void main()
{
	int a[5],i,tot=0;
	float per;
	printf("\nenter 5 subject marks\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<5; i++)
	{
		tot=tot+a[i];
	}
	per=tot/5;
	printf("total marks=%d",tot);
	printf("\npersantage=%f",per);
}
