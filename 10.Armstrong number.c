//Aim:Write a C program to whether the given number is Armstrong Number of Not.
#include<stdio.h>
#include<math.h>
 main()
{
int r,n,t,s=0;
printf("Enter number:");
scanf("%d",&n);
t=n;
while(n>0)
{
r=n%10;
s=s+pow(r,3);
n=n/10;
}
if(s==t)
{
  printf("%d is a Armstrong number",t);
}
else
   printf("%d is not a Armstrong number",t);
}