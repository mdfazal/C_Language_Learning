#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("Hello World\n");
    printf("Hello \"World\"\n");
    printf("My favorite %s is %d \n", "number", 500);
    printf("My favorite %s is %f \n", "number", 500.428);
    int favNum = 90;
    char myChar = 'i';
    printf("My favorite %c is %d", myChar, favNum);

    return 0;
}