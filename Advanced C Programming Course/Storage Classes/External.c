/*
    External Variables

    -the extern storage class simply tells us that a variable is defined elsewhere
        -not within the same block where it is used

    -an extern variable is a global variable initialized with a legal value where it is declared in order to be used elsewhere
        -an extension to the concept of the global variable
    
    -the main purpose of using extern variables is that they can be accessed between two different files which are part of a large program
        -functions contained in separate files can communicate through external variables
    
    -the extern storage class is used to give a reference of a global variable that is visible to ALL the program files

    -inside the module that wants to access the external variable
        -the variable data type is preceded with they keyword extern in the declaration
            -tells the compiler that a globally defined variable from another file is to be accessed
        
    -suppose you want to define an int variable called moveNumber
        -you want to access the value and possibly modify it within a function contained in another file

    int moveNumber = 0;

    -declare the above, at the beginning of your program, outside of any function
        -its value could be referenced by any function within that program
        -moveNumber is defined as a global variable

    -this same definition of the variable moveNumber also makes its value accessible by functions contained in other files

    -the statement defines the variable moveNumber not just as a global variable, but also as an external global variable

    -to reference the value of an external global variable from another module
        -you must declare the variable to be accessed, preceding the declaration with the keyword extern
        -the variable cannot be initialized
            -it points the variable name at a storage location that has been previously defined

    extern int moveNumber;

    -the value of moveNumber can now be accessed and modified by the module in which the preceding declaration appears

    -other modules can also access the value of moveNumber by incorporating a similar extern declaration in the file

    -you must obey an important rule when working with external variables
        -the variable has to be defined in some place among your source files

    -the first way is to declare the variable outside of any function, not preceded by the keyword extern

    int moveNumber;

    -the second way to define an external variable is to declare the variable outside of any function, placing the keyword extern in front of the declaration
        -explicitly assigning an initial value to it

    extern int moveNumber = 0;

    -these two ways are mutually exclusive
*/

#include <stdio.h>
/*
int i=5;

char text[255][25];

void foo(void);

int main(void)
{
    printf("%i ",i);
    foo ();
    printf("%i\n",i);
    return 0;
}*/

/*
    Extern specifier on functions

    -when a function is defined, it can be declared to be extern explicitly

    -an extern function can be called from a file where it is not defined
        -where it does not need to be defined in a header file

    extern double foo(double x){...}

    -the definition of the foo function effectively becomes global to any file in the program
        -can be called from outside the file
*/

#include "foo.c"

int count;

extern void write_extern ();

int main()
{   
    count = 5;
    write_extern();
    return 1;
}