#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumber[] = {4, 8, 15, 23, 42};
    luckyNumber[1] = 200;
    printf("%d", luckyNumber[1]);

    int luck[10];
    luck[1] = 8;
    printf("%d", luck[1]);

    char phrase[20];
    return 0;
}