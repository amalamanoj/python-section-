/*Author:Amala Manoj
Date:25-02-2025*/
//To compare two strings
#include <stdio.h>
#include <string.h>
int main()
{
char str1[20],str2[30];
printf("Enter the text:");
scanf("%s",str1);
printf("Enter the text:");
scanf("%s",str2);
if(strcmp(str1,str2)==0)
{
	printf("String is equal");
}
else
{
	printf("String is not equal");
}
return 0;
}
