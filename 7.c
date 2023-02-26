#include<stdio.h> 
#include<conio.h>
void main()
{
  int i,num; 
  long int fact=1;
  printf("ENTER A NUMBER: ");
  scanf("%d",&num); 
  for(i=1;i<=num;i++)
  {
  fact*=i;
  }
  printf("THE FACTORIAL OF %d IS %ld",num,fact); 
  getch();
}