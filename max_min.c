//To find maximum and minimum elements
#include <stdio.h>
int main()
{
int i,n,max,min,posmax=0,posmin=0;
printf("Enter the size of array:");
scanf("%d",&n);
int a[n];
printf("Enter the elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Elements are\t");
	for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
max=a[0];
min=a[0];
{
for(i=1;i<n;i++)
{
 	if(a[i]>max)
 	{
 	max=a[i];
 	posmax=i;
 	}
 	if(a[i]<min)
 	{
 	min=a[i];
 	posmin=i;
 	}
 }}
printf("\n Maximum is %d at position %d",max,posmax);
printf("\n Minimum is %d at position %d",min,posmin);
return 0;
}
