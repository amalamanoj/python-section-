/*Author:Amala Manoj
Date:25-02-2025*/
//To reverse a string
#include <stdio.h>
int main()
{
char str[30],temp;
int len,i,j;
printf("Enter the string:");
scanf("%[^\n]",str);
for(len=0;str[len]!='\0';len++);
i=len-1;

	for(j=0;j<len/2;j++){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i--;
}
printf("Reverse string is %s",str);
return 0;
}
		
		
