/*Author:Amala Manoj
Date:25-02-2025*/
//To convert lower case to upper case
#include <stdio.h>
int main()
{
char str[30];
int i,j;
printf("Enter the string:");
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
{

if (str[i]>='a'&&str[i]<='z')
{
str[i]=str[i]-32;
}
}
printf("The string is %s",str);
return 0;
}
