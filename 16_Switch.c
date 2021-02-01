#include <stdio.h>
#include <stdlib.h>

int main(){

    char grade = 'A';
    switch(grade){
        case 'A':
        printf("You dud great");
        break;
        case 'B':
        printf("You dud alright");
        break;
        case 'C':
        printf("You dud poorly");
        break;
        case 'D':
        printf("You dud very bad");
        break;
        case 'F':
        printf("You Failed");
        break;
        default :
        printf("Inavlid Grade");
    }

    return 0;
}