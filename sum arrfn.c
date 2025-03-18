//To calculate the sum of the array using function
#include <stdio.h>
void sumarray(int arr[],int size);
int main()
{
int size;
printf("Enter the number of the elements:");
scanf("%d",&size);
int arr[size];
sumarray(arr,size);
return 0;
}
	void sumarray(int arr[], int size)
	{
		int sum=0;
		printf("Enter %d elements:",size);
		for(int i=0;i<size;i++)
		{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		}
	printf("sum of elements is %d",sum);
	}
