#include<stdio.h> 
int main()
{
  int avg = 0,sum =0,x=0,num[4];
  for (x=0; x<4;x++)
  {
  printf("Enter number %d \n", (x+1)); 
  scanf("%d", &num[x]);
  }
  for (x=0; x<4;x++)
  {
  sum = sum + num[x];
  }
  avg = sum/4;
  printf("Average of entered number is: %d\n", avg); 
  return 0;
}