#include <stdio.h>
#include <stdlib.h>

int main (){
    int age = 30;
    int gpa = 3.4;
    char grade = 'A';

    printf("age: %p, gpa: %p, grade: %p", &age, &gpa, &grade);

    return 0;
}