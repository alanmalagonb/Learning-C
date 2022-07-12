/*
    Defining a function

    -when creating a function, you specify the function header as the first line of the function definition
        -followed by a starting curly brace {
        -the executable code in between the starting and ending braces
        -the ending curly brace }
        -the block of code between braces following the function header is called the function body

    -the function header defines the name of the function
        -parameters(which specify the number and types of values that are passed to the function when it's called)
        -the type for the value that the function returns
    
    -the function body contains the statements that are executed when the function is called
        -have access to any values that are passed as arguments to the function

    Return_type Function_name(Parameters - separated by commas)
    {
        // Statements...
    }

    -the first line of a function definition thells the compiler(in order from left to right) three things about the function
        -the type of value it returns
        -its name
        -the arguments it takes

    -choose meaningful function names is just as important as choosing meaningful variable names
        -greatly affects the program's readability

    void printMessage(void)
    {
        printf("Programming is fun.\n");
    } 

    -the statements in the function body can be absent, but the braces must be present

    -If there are no statements in the body of a function, the return type must be void, and the function will not do anything
        -defining a function with an empty body is often useful during the testing phase of a complicated program
        -allows you to run the program with only selected functions actually doing something
        -you can then add the detail for the function bodies step by step, testing at each stage, until the whole thing is implemented and fully tested
*/

/*
    Naming functions

    -the name of a function can be any legal name
        -not a reserved word (such as int,double,sizeof, and so on)
        -Is not the same name as another function in your program
        -Is not the same name as any of the standard library functions
            -would prevent you from using the library function
        
    -a legal name has the same form as that of a variable
        -a sequence of letters and digits
        -first character must be a letter
        -underline character counts as a letter

    -the name that you choose should be meaningful and relevant to what the function does

    -you will often define function name (and variable names,too) that consist of more than one word

    -there are three common approaches you can adopt
        -separate each of the words in a function name with an underline character
        -capitalize the first letter of each word
        -capitalize words after the first(camelCase)

    -can pick any one you want, but, use the same approach throughout your program
*/

/*
    Function prototypes

    -a function prototype is a statement that defines a function
        -defines its name, its return value type, and the type of each its parameters
        -provides all the external specifications for the function

    -you can write a prototype for a function exactly the same as the function header
        -only difference is that you add a semicolon at the end

    void printMessage(void);

    -a function prototype enables the compiler to generate the appropiate instructions at each point where you can call the function
        -It also checks that you are using the function correctly in each invocation
    
    -when you include a standard header file in a program, the header file adds the function prototype for that library to your program
        -the header file stdio.h contains function prototypes for printf(), among others

    -generally appear at the beginning of a source file prior to the implementations of any functions or in a header file

    -allows any of the functions in the file to call any function regardless of where you have placed the implementation of the functions

    -parameter names do not have to be the same as those used in the function definition
        -not required to include the names of parameters in a function prototype

    -its good practice to always include declarations for all of the functions in a program source file, regardless of where the are called
        -will help keep your programs more consistent in design
        -prevent any errors from occuring if, at any stage, you choose to call a function from another part of your program
*/

#include <stdio.h>

void add();

int maint()
{
    add();
    return 0;
}

void add()
{
    
}
