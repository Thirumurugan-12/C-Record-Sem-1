#include<stdio.h> 
#include<conio.h> 
void main()
{
  char op;
  float num1, num2, result=0.0f;
  printf("\nWELCOME TO SIMPLE CALCULATOR");
  printf("\n \n"); 
  printf("\nEnter [number 1] [+ - * /] [number2]\n");
  scanf("%f %c %f", &num1, &op, &num2);
  switch(op)
  {
  case '+':
    result = num1 + num2; 
    break; 
  case '-':
    result = num1 - num2; 
    break;
  case '*':
    result = num1 * num2; 
    break;
  case '/':
    result = num1 / num2; 
    break; 
  default:
    printf("Invalid operator");
  }
  printf("%.2f %c %.2f = %.2f", num1, op, num2, result); 
  getch();
}