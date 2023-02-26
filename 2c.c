#include <stdio.h> 
void main( )  
{ 
  int a, b, c; 
  printf("Enter 3 numbers..."); 
  scanf("%d%d%d",&a, &b, &c);
  if(a > b)
  {
  if(a > c)
  {
  printf("a is the greatest");
  }
  else
  { 
  printf("c is the greatest");
  }
  }
  else
  {
  if(b > c)
  {
  printf("b is the greatest");
  }
  else
  {
  printf("c is the greatest");
  }
  }
}