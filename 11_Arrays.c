#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumber[] = {4, 8, 15, 23, 42};
    luckyNumber[1] = 200;
    printf("%d", luckyNumber[1]);
    return 0;
}