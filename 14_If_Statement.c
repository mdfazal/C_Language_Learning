#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2){
    int result;
    if(num1>num2){
        result = num1;
    } else {
        result = num2;
    }
    return result ;
}

int max1(int num3, int num4, int num5){
    int result1;
    if(num3 >= num4 && num3 >= num5){
        result1 = num3;
    } else if(num4 >= num3 && num4 >= num5){
        result1 = num4;
    } else {
        result1 = num5;
    }
    return result1; 
}

int main()
{
    printf("%d", max(4,10));
    printf("%d", max1(10,2,3));
    return 0;
}