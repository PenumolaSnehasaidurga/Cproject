//Aim:Write a C Program to enter a decimal number and calculate and display the binary equivalent of that number.
#include<stdio.h>
#include<math.h>
main()
{
int i,b=0,n,r;
printf("Enter number:");
scanf("%d",&n);
for(i=0;n>0;i++)
{
r=n%2;
n=n/2;
b=b+(pow(10,i)*r);
}
printf("%d is the binary equivalent",b);
}