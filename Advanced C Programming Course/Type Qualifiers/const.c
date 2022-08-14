/*

    -type qualifiers can be used in front of variables to give the compiler more information about it intended use of the variable
        -helps with optimization

    -C90 added two new type qualifiers
        -constancy and volatility

    -these properties are declared with the keywors const and volatile, which create qualified types

    -the C99 standard added a third qualifier
        -restrict
            -designed to facilitate compiler optimizations

    -type qualifiers are also Idempotent (added in C99)
        -means that you can use the same qualifier more than once in a declaration, and the superfluous ones are ignores
*/

/*
    Const

    -the compiler allows you to associate the const qualifier with variables whose values will not be changed by the program
        -you can tell the compiler that the specified variables have a constant value throughout the program's execution

    -if you try to assign a value to a const variable after initializing it
        -the compiler might issue an error message, although it is not requires to do so
    
    -one of the motivations for the const attribute in the language is that it allows the compiler to place your const variables into read-only memory
*/

#include <stdio.h>

const double pi = 3.14159;
const char * MONTHS[12] = {"January","February","March","April","May","June","July",
                           "August","September","October","November","December"};

int main(void) {
    const float *pf; // pf points to a constant float value

    float * const pt; // pt is a const pointer

    const float * const ptr;

    float const *pfc; // same as const float *pfc;

    return 0;
}

void display(const int array[], int limit);

char *strcat(char *restrict sl, const char * restrict s2);

/*
    const vs. define

    -#define is pre-processor directive while const is a keyword

    -const variables are actual variables like any other normal variable
        -we can pass them around, typecast them and any other thing that can be done with a normal variable

    -#define is not scope controlled whereas const is scope controlled
        -#define can be used in anywhere in the program or in other file to by including the related header file
        -a constant can be declared inside a function (function/scope)
*/