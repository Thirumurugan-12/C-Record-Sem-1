#include <stdio.h>

struct student 
{ 
char firstName[50]; 
int roll;
int marks;
} s[10];
int main() 
{
    int i;
    printf("Enter information of students:\n"); 
    for (i = 0; i< 5; ++i) 
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll); 
        printf("Enter first name: ");
        scanf("%s", s[i].firstName); 
        printf("Enter marks: "); 
        scanf("%d", &s[i].marks);
    }
    printf("Displaying Information:\n\n"); 

    for (i = 0; i< 5; ++i) {
        printf("\nRoll number: %d\n", i + 1); 
        printf("First name: "); 
        puts(s[i].firstName);
        printf("Marks: %d", s[i].marks); 
        printf("\n");
    }
    return 0;
}
