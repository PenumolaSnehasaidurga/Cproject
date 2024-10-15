//Aim :3.Write a C program to input the electricity units and calculate the total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
#include<conio.h>
main()
{
float units;
printf("Enter electricity units:");
scanf("%f",&units);
if(units<=50)
  printf("Your electricity bill is Rs%f",0.50*units);
else if(units>50&&units<=150)
  printf("Your electricity bill is Rs%f",0.75*units);
else if(units>150&&units<=250)
  printf("Your electricity bill is Rs%f",1.20*units);
else if(units>250)
  printf("Your electricity bill is Rs%f",1.50*units);
else 
  printf("Wrong input"); 
}