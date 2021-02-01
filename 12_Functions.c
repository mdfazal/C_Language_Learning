#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Top");
    sayhi("Mike");
    sayhi("Mama");
    sayhi("Tom");
    printf("Bottom");
    return 0;
}

void sayhi(char name[]){
    printf("Hello %s", name);
}
