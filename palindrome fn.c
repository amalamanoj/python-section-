//To check the given number is palindrome
#include <stdio.h>
void palindrome(int);
int main()
{
int num;
palindrome(num);
return 0;
}
	void palindrome (int a)
	{
		int rem,rev=0,number;
		printf("Enter a number:");
		scanf("%d",&a);
		number=a;
		for(rev=0;a!=0;a=a/10)
		{
			rem=a%10;
			rev=rev*10+rem;
		}
			if(number==rev)
			{
				printf("%d is palindrome",number);
			}
			else
			{
				printf("%d is not palindrome",number);
			}
	}
