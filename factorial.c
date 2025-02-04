// factorial using while loop
#include<stdio.h>
int main()
{
int num1,i,fact=1;
printf("Enter the number:");
scanf("%d",&num1);
i=num1;
if(num1<0)
 {
  	printf("Invalid Entry");
 }
 else
 {
 	while(i>0)
 	{
 	fact=fact*i;
 	i--;
 	}
 	printf("The factorial is %d",fact);
 }
 
 
 
 
 return 0;
}
 
