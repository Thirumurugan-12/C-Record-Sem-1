#include<stdio.h> 
#include<conio.h> 
void swap(int*,int *); 
void main()
{
  int a,b;
  printf("Enter any two number:\n"); 
  scanf("%d\n%d",&a,&b);
  printf("\n Before the swapping:a=%d,b=%d",a,b); 
  swap(&a,&b);
  printf("\n After the swapping:a=%d,b=%d",a,b); 
  getch();
}
void swap(int *p,int *q)
{
  int tmp; 
  tmp=*p;
  *p=*q;
  *q=tmp;
}