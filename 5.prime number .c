//Aim :Write a C Program to verify a given number is prime or not.
#include<stdio.h>
main()
{
int i,n,f=0;
printf("Enter number :");
scanf("%d",&n);
for(i=2;i<n;i++)
{
  if(n%i==0)
  f++;
}
if(f==0&&n>1)
   printf("%d is a prime number",n);
else
   printf("%d is not a prime number",n);
}
