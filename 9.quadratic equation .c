//Aim:Write a C program to find the roots of a Quadratic Equation
#include<stdio.h>
#include<math.h>
 main()
{
int a,b,c,det,r1,r2;
printf("Enter coefficients a,b,c:");
scanf("%d%d%d",&a,&b,&c);
det=b*b-4*a*c;
if(det>0)
{
  r1=(-b-sqrt(det))/2*a;
  r2=(-b+sqrt(det))/2*a;
  printf("The roots of the quadratic equation are %d and %d",r1,r2);
}  
else if(det==0)
{
  r1=(-b-sqrt(det))/2*a;
  printf("The roots of the quadratic equation are %d and %d",r1,r1);
}  
else
   printf("No real roots");  
}   