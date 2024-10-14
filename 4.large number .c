//Aim :Write a C program to find the largest among four given numbers using nested if…else.
#include<stdio.h>
main()
{
int a,b,c,d;
printf("Enter any four numbers:"); 
scanf("%d%d%d%d",&a,&b, &c, &d);
if(a>b)
{
 if(a>c)
{
  if(a>d)
    printf("%d is larger number",a);
  else
    printf("%d is larger number",d);
}
 else
{
  if(c>d)
   printf("%d is larger number",c);
  else
   printf("%d is larger number",d);
}
}
else
  if(b>c)
{
   if(b>d)
    printf("%d is larger number",b);
   else
    printf("%d is larger number",d);
}
  else
   if(c>d)
    printf("%d is larger number",c);
   else
    printf("%d is larger number",d);
}