#include<stdio.h> 
int main()
{
    int ivar; float fvar;
    char svar[100]; 
    printf("\nEnter the integer value: "); 
    scanf("%d",&ivar);
    printf("\nEnter the float value : "); 
    scanf("%f",&fvar);
    printf("\nEnter the string value: "); 
    scanf("%s",&svar);
    printf("\n"); 
    printf("\nInteger value is : %d",ivar); 
    printf("\nFloat value is : %f",fvar);
    printf("\nEntered string is : %s",svar);
    return 0;
}