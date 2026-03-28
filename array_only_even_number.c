#include<stdio.h>
void main()
{
	int n,i;
    printf("enter limlit :");
	scanf("%d",&n);
	int a[n];	
	for(i=0; i<n; i++)
	{
		printf("enter array values :");
		scanf("%d",&a[i]);
	}
	printf("\neven number only\n");
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
	}
}
