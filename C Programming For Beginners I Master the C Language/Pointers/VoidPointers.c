/*
    -the type name void means absence of any type
    
    -a pointer of type void* can contain the address of a data item of any type

    -void* is often used as a parameter type or return value type with functions that deal with data in a type-independent way

    -any kind of pointer can be passed around as a value of type void*
        -the void pointer does not know what type of object it is pointing to, so, it cannot be dereferenced directly
        -the void pointer must first be explicitly cast to another pointer type before it is dereferenced

    -the address of a variable of type int can be stored in a pointer varible of type void*

    -when you want to access the integer value at the address stored in the void* pointer, you must first cast the pointer to type int*
*/

#include <stdio.h>

int main(void)
{
    int i=10;
    float f=2.34;
    char ch='k';

    void *vptr;

    vptr=&i;
    printf("Value of i=%d\n",*(int*)vptr);

    vptr=&f;
    printf("Value of f=%.2f\n",*(float*)vptr);

    vptr=&ch;
    printf("Value of ch=%c\n",*(char*)vptr);
    
    return 0;
}