//Aim:Write a C program to whether the given number is Armstrong Number of Not.
include<stdio.h>
#include<math.h>
main()
{
int n,l=0,t,v,r,s=0;
printf("Enter your number");
scanf("%d",&n);
t=n;
v=t;
while(n>0)
{
 n=n/10;
 l++;
}
for(;t>0;t=t/10)
{
  r=t%10;
  s=s+pow(r,l);
}
if(s==v)
{
  printf("%d is an Armstrong number",v);
}
else
  printf("%d is not an Armstrong number",v);
}











    