#include <stdio.h>
int main()
{
	int row,col,row1,col1,i,j;
	printf("Enter the rows and columns of 1st matrix:");
	scanf("%d %d",&row,&col);
	int a[row][col];
	printf("Enter the elements\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the rows and columns of 2nd matrix:");
	scanf("%d %d",&row1,&col1);
	int b[row1][col1];
	if(row!=row1 && col!=col1)
	{
		printf("Invalid");
		return 0;
	}
	else
		{
			printf("Enter the elements\n");
			for(i=0;i<row1;i++)
			{
				for(j=0;j<col1;j++)
				{
					scanf("%d",&b[i][j]);
				}
			}
		}
	int c[i][j];
	printf("The sum of matices are: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col1;j++)
		{
		 c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col1;j++)
		{
		 	printf("%d\t",c[i][j]);
		}
	printf("\n");
	}
	return 0;
}

