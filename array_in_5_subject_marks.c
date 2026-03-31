#include<stdio.h>
void main()
{
	int n,i,tot=0;
	float per;
	printf("enter array limit:");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array elemants\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\ntotal array elemants\n");
	for(i=0; i<n; i++)
	{
		tot=tot+a[i];
	}
	per=tot/5;
	printf("total=%d",tot);
	printf("\npersantage=%f",per);
}
