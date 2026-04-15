#include<stdio.h>
void main()
{
	int temp=0,i,n,j;
	printf("enter array limit :");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array elemants\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0; j<n; j++)
	{
		for(i=0; i<n; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("\nsorted arraye elemants in assiending way\n");
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
}
