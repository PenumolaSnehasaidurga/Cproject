//Aim :Write a C program to check whether a given number is a 'Perfect' number or not.
#include<stdio.h>
main()
{
int i,n,s=0;
printf("Enter number :");
scanf("%d",&n);
for(i=1;i<n;i++)
{
  if(n%i==0)
  s=s+i;
}  
if(s==n)
   printf("%d is a perfect number",n);
else
   printf("%d is not a perfect number",n);
}   