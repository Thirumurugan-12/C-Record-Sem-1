#include<stdio.h>
#include<conio.h>
void main()
{
  int num; 
  //clrscr();
  printf("\nOdd or Even Number\n");
  printf("\nEnter an integer you want to check:");
  scanf("%d",&num);
  if((num%2)==0)
  {
  printf("%d is an Even number",num);
  }
  else
  {
  printf("%d is an Odd number",num);
  }
  getch();
}
