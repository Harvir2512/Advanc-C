#include<stdio.h>
void main()
{
	int i,n;
	printf("enter array elemants:");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array elemants\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1; i>=0; i--)
	{
		printf("%d  ",a[i]);
	}
}
