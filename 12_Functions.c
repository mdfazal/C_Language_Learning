#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Top\n");
    sayhi("Mike", 40);
    sayhi("Mama", 30);
    sayhi("Tom", 20);
    printf("Bottom");
    return 0;
}

void sayhi(char name[], int age){
    printf("Hello %s you are %d\n", name, age);
}
