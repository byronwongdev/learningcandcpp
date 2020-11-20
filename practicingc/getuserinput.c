#include <stdio.h>
#include <stdlib.h>


int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);

    double gpa;
    printf("\n" "Enter your gpa :");
    scanf("%lf", &gpa);
    printf("Your GPA is %f", gpa);

    char grade;
    printf("\n" "Enter your grade:");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);

    char name[20];
    printf("\n" "Enter your name:");
    scanf("%s", name);
    printf("Your name is %s", name);

    return 0;

}