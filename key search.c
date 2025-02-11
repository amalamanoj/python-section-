Author-Amala Manoj
Date-11-02-2025
//To perform a sequential search in a one dimensional array.
#include <stdio.h>
int main()
{
int i,n,key,flag=0,position=0;
printf("Enter the size of array:");
scanf("%d",&n);
int a[n];
printf("Enter the elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter key:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
	if (a[i]==key)
	{
	  flag=1;
	  position=i;
	  break;
	  }
}
if (flag==0)
{
	printf("Elements not found");
}
else
{
	printf("Elements %d is found at %d",key,position);
}
return 0;
}
	  
