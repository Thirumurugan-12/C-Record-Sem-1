/*To evaluate area of triangle (sqrt(s(s-a)(s-b)(s-c)*/ 
#include<stdio.h>
#include<math.h> 
#include<conio.h>
void main()
{
  int a,b,c;
  float s,area;
  printf("enter the values of a,b,c"); 
  scanf("%d%d%d",&a,&b,&c); 
  s=(a+b+c)/2.0;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("The area of a trangle is =%f",area); 
  getch();
}
