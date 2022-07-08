/*
    Header Files
    -Define information about some of the functions that are provided by that file
        -stdio.h is the standard C library header and provides functionality for displaying output, among many other things
        -We need to include this file in a program when using the printf() function from the standard library
        -stdio.h contains the information that the compiler needs to understand what printf() means, as well as other functions that deal with input and output
        -stdio, is short for standard input/output
    -Header files specify information that the compiler uses to integrate any predefined functions within a program
    -You will be creating your own header files for use with your programs

    Syntax
    -Header file names are case sensitive on some systems, so you should always write them in lowercase
    -Two ways to #include header files in a program
        -Using angle brackets(#include <Alan.h>)
            -tells the preprocessor to look for the file or more standard system directories
        -Using double quotes(#include "Alan.h")
            -tells the preprocessor to first look in the current directory
    -Every C compiler that conforms to the C11 standard will have a set of standard header files supplied with it
    -You should use #ifndef and #define to protect against multiple inclusions of a header file

    //some header

    //typedefs
    typedef struct names_st names;

    //function prototypes
    void get_names(names *);
    void show_names(const names *);
    char * s_gets(char * st, int n);

    -Header files includes many different things
        -#define directives
        -structure declarations
        -typedef statements
        -function prototypes
    -Executable code normally goes into a source code file, not header file
*/