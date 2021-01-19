#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Entyer your age: ");
    scanf("%d", &age);
    printf("YOu are %d years old\n", age);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your name is %s\n", name);

    char name1[20];
    printf("Enter your name: ");
    fgets(name1, 20, stdin);
    printf("Your name is %s\n", name1);

    double gpa;
    printf("Enter your Gpa: ");
    scanf("%lf", &gpa);
    printf("Your Gpa is  %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your Grade is %c", grade);

    return 0;
}