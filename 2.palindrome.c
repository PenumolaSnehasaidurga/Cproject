//Aim :Write a C program to verify whether or not a given number is palindrome.//
#include<conio.h>
 main()
{
int n,t,sum=0,rem;
printf("enter number:");
scanf("%d",&n);
t=n;
while(n!=0)
{
 rem=n%10;
 sum=sum*10+rem;
 n=n/10;
}
 if(sum==t)
{
  printf("%d is a palindrome",t);
}
 else
{
  printf("%d is not a palindrome",t);
}
}