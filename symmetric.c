#include <stdio.h>
int main()
{
int n,i,j,symmetric=1;
printf("Enter the size of the matrix:");
scanf("%d",&n);
int a[n][n];
printf("Enter the elements of the matrix\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
		}
	}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if (a[i][j]=a[j][i])
		{
			symmetric=0;
			break;
			}
		}
}
if(symmetric)
printf("symmetric matrix");
else
printf("The matrix is not symmetric");
return 0;
}
