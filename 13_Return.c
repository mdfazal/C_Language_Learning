#include <stdio.h>
#include <stdlib.h>

double cube(double num ){
    double result = num*num*num;
    return result;
    printf("here");  //this never gets printed out becauzse after return the code breaks. 
}

int main()
{
    printf("Answer: %f", cube(3.0));
    return 0;
}