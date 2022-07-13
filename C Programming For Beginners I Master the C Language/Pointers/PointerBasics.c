#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 10;
    int *pointerNumber = NULL;
     
    pointerNumber = &number;

    printf("number's addres: %p\n", &number);
    printf("pointer's address: %p\n", (void*)&pointerNumber);
    printf("pointer's value: %p\n", pointerNumber);
    printf("pointer's pointing value: %d\n", *pointerNumber);

    return 0;
}