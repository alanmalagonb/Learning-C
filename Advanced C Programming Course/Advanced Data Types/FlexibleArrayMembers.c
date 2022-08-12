/*
    -a flexible array member is a feature introduced in the C99 standard of the C programming language

    -when using a structure, we can declare an array without a dimension and whose size is flexible in nature
        -a flexible array member's size is variable (can be changed be at runtime)

    struct s {
        int arraySize;
        int array[];
    }; // end struct s

    -a flexible array member is declared by specifying empty square brackets([])
*/

#include <stdio.h>
#include <malloc.h>

struct s{
    int arraySize;
    int array[];
}; // end struct s

int main() {
    int desiredSize = 5;
    struct s *ptr;

    ptr = malloc( sizeof(struct s) + desiredSize * sizeof(int));

    return 0;
}

/*
    Restrictions

    -a flexible array member can be declared only as the last member of a struct

    -each struct can contain at most one flexible array member

    -a flexible array cannot be the only member of a struct
        -the struct must also have one or more fixed members

    -any struct containing a flexible array member cannot be a member of another struct

    -a struct with a flexible array member cannot be statically initialized it must be allocated dynamically
    -you cannot fix the size of the flexible array member at compile time
*/

/*
    Summary

    -It is debatable on whether it is good practice to use flexible array members

    -some argue that it is not portable
        -since ISO C99 was released in 1999 ,striving for ISO C89 compatibility is a weak argument

    -some argue that you can just declare an array of size 0 or 1 and reallocate
        -in previous standards of the C language, it was common to declare a zero-sized array member instead of a flexible array member
        -using non-standardized constructs to support flexible array members can yield undefined behavior
            -bad practice and any undefined-behavior should be avoided

    -a struct with a flexible array member reduces the number of allocations for it by 1/2
        -instead of 2 allocations for one struct object you need just 1
            -meaning less effort and less memory occupied
            -you save the storage for one additional pointer

    -if you have to allocate a large number of struct instances, you can measurably improve the runtime and memory usage of your program (by a constant factor)
*/