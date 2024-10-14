//Aim:Write a C program that displays all the numbers from X and Y, that are divisible by a and b.
#include<stdio.h>
main()
{
int x,y,a,b;
printf("Enter numbers from and to:");
scanf("%d%d",&x,&y);
printf("Enter numbers to divide:");
scanf("%d%d",&a,&b);
for(;x<=y;x++)
{
  if(x%a==0&&x%b==0)
  printf("%d\t",x);
}  
}   