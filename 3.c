#include<stdio.h> 
#include<conio.h> 
void main()
{
  int year; 
  //clrscr();
  printf("Enter the Year(YYYY):"); 
  scanf("%d",&year);
  if(year%4==0 && year%100!=0||year%400==0) 
    printf("\nThe Given year %d is a Leap Year",year);
  else
    printf("\n The Given year %d is Not a Leap Year",year); 
  getch();
}