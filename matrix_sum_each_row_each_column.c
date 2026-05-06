#include <stdio.h>

int main() {
    int a[3][3],i,j,rowSum,colSum;

    printf("Enter 3x3 matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // Row sums
    for(i=0; i<3; i++) 
	{
        rowSum=0;
        for(j=0; j<3; j++)
        {
            rowSum=rowSum+a[i][j];
        }
        printf("Sum of row=%d",rowSum);
        printf("\n");
    }
    // Column sums
    for(j=0; j<3; j++)  
	{
        colSum=0;
        for(i=0; i<3; i++)
        {
            colSum=colSum+a[i][j];
       
        }
         printf("Sum of column=%d",colSum);
         printf("\n");
    }

    return 0;
}
