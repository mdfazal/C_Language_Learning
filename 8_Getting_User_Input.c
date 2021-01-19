#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[20];
    printf("Enter your name: ");
    fgets(name1, 20, stdin);
    printf("Your name is %s\n", name1);
    
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your Grade is %c\n", grade);

    int age;
    printf("Entyer your age: ");
    scanf("%d", &age);
    printf("YOu are %d years old\n", age);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your name is %s\n", name);

    double gpa;
    printf("Enter your Gpa: ");
    scanf("%lf", &gpa);
    printf("Your Gpa is  %f\n", gpa);

    return 0;
}