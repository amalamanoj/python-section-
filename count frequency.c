Author:Amala Manoj
Date:25-02-2025
//To count frequency
#include <stdio.h>
int main()
{
char str[20],i,j;
int count,len=0;
printf("Enter the string:");
scanf("%s",str);
for(i=0;str[i];i++)
	{
	len+=1;
	}
for(i=0;i<len;i++)
{
	count=1;
	if (str[i]!='\0');
	{
		for(j=i+1;j<len;j++)
		{
			if (str[i]==str[j])
			{
				count+=1;
				str[j]='\0';
			}
		}
	}
printf("The character %c of frequency %d in the string\n",str[i],count);
}

  return 0;
}
    
  
