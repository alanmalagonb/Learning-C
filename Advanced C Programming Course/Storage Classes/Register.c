/*
    -a processor register (CPU register) is one of a small set of data holding places that are part of the computer processor
        -a register may hold an instruction, a storage address, or any kind of data

    -the register storage class is used to define local variables that should be stored in a register instead of RAM (memory)
        -makes the use of register variables to be much faster than that of the variables stored in the memory during the runtime of the program

    -the register storage class should only be used for variable that require quick access
        -the variables which are most frequently used in a C program
        -if a function uses a particular variable heavily

    -the keyword register hints to the compiler that a given variable can be put in a register
        -it is the compiler's choice to put it in a register or not
        -MIGHT be stored in a register depending on hardware and implementation restrictions
        -generally, compilers themselves do optimization and put the variables in register

    -the keyword register is used to define register storage class

    -both local variables and formal parameters can be declared as register variables

    -this storage class declares register variables which have the same functionality as that of the auto variables
        -the lifetime of register variable remains only when control is within the block

    -the variable stored in a register has a maximum size equal to the register size

    -you cannot obtain the address of a register variable using pointers
        -cannot have the unary '&' operator applied to it(as it does not have a memory location)
*/

#include <stdio.h>

int main() {
    register int x = 15; // register variable (counter)

    printf("\n%d", x);

    return 1;
}

/*
    Summary

    Storage Class   Declaration Location    Scope (Visibility)                                                      Lifetime (Alive)
    auto            Inside a function/block Within the function/block                                               Until the function/block completes
    register        Inside a function/block Within the function/block                                               Until the function/block completes
    extern          Outside all functions   Entire file plus other files where the variable is declared as extern   Until the program terminates
    static (local)  Inside a function/block Within the function/block                                               Until the program terminates
    static (global) Outside all functions   Entire file in which it is declared                                     Until the program terminates

*/