#include<stdio.h> 
int main()
{
    char S1[100]="Programming ", S2[]="is awesome"; 
    int length,j;
    length=0; 
    while(S1[length]!='\0')
    {
    ++length;
    }
    for(j=0;S2[j]!='\0';++j,++length)
    {
    S1[length]=S2[j];
    }
    printf("After concantenation:");
    puts(S1); 
    return 0;
}
