//The program should take two numbers and an operator as input and perform that corresponding operation using switch statements.
#include<stdio.h>
int main()
{
int num1,num2,sum,diff,multi,div,modulus;
char op;
printf("Enter the number1:");
scanf("%d",&num1);
printf("Enther the number2:");
scanf("%d",&num2);
printf("Enter the operator:");
scanf(" %c",&op);
switch (op)
{
case '+':
 sum=num1+num2;
 printf("The sum is %d",sum);
 break;
case '-':
 diff=num2-num1;
 printf("The difference is %d",diff);
 break;
case '*':
 multi=num1*num2;
 printf("The product is %d",multi);
 break;//The program should take two numbers and an operator as input and perform that corresponding operation using switch statements.
#include<stdio.h>
int main()
{
int num1,num2,sum,diff,multi,div,modulus;
char op;
printf("Enter the number1:");
scanf("%d",&num1);
printf("Enther the number2:");
scanf("%d",&num2);
printf("Enter the operator:");
scanf(" %c",&op);
switch (op)
{
case '+':
 sum=num1+num2;
 printf("The sum is %d",sum);
 break;
case '-':
 diff=num2-num1;
 printf("The difference is %d",diff);
 break;
case '*':
 multi=num1*num2;
 printf("The product is %d",multi);
 break;
case '/':
 div=num2/num1;
 printf("The divisible number is %d",div);
 break;
case '%':
 modulus=num2%num1;
 printf("The modulus is %d",modulus);
 break;
default:
 printf("Invalid entry");
 break;
}
 return 0;
}
 

case '/':
 div=num2/num1;
 printf("The divisible number is %d",div);
 break;
case '%':
 modulus=num2%num1;
 printf("The modulus is %d",modulus);
 break;
default:
 printf("Invalid entry");
 break;
}
 return 0;
}
 
