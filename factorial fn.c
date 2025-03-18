//To find the factorial of the number using user defined function
#include <stdio.h>
int fact();
int main()
{
int a,result;
printf("Enter the number:");
scanf("%d",&a);
result=fact(a);
printf("Factorial is %d",result);
return 0;
}
	int fact(int x)
	{
		int i,fact=1;
		
		for(i=1;i<=x;i++)
		{
			fact=fact*i;
		}
	return fact;
	}
