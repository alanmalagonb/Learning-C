/*
    -the typedef keyword is an advanced feature in C that enables you to create your own name for an existing data type

    -to define a new type name with typedef
        -write the statement as if a variable of the desired type were being declared
        -where the name of the declared variable would normally appear, substitute the new type name
        -in front of everything, place the keyword typedef

    typedef int Counter;

    -defines the name Counter to be equivalent to the C date type int
    
    -variables can subsequently be declared to be of type Counter

    Counter j,n;

    -the C compiler treats the declaration of the variables j and n as normal integer variables
*/

#include <stdio.h>

typedef int* i_pointer;

int main() {

    i_pointer p; // same as int*p;

    i_pointer a, *b; // same as int *a, **b;

    i_pointer myArray[10]; // same as int *myArray[10];

    return 0;
}

/*
    Avantages

    -one advantages is in the added readability that it lends to the definition of the variables
        -code is more readable when the names of the types lend insight into the meaning and intended use of a type
        -it is clear from the definition of what the intended purpose of certain variables are in the program

    -another advantage is maintainability
        -using typedef's instead of explicit types is analogous to using variables instead of explicit numbers (magic numbers)
        -if the type used for a certain purpose needs to be changed, then only the typedef line need to be changed
            -when typedef's are not used, thousands of manual changes to the code may be required to achieve this simple logical operation

    -you can also use typedef to help make a program more portable
        -used to create synonyms for the basic data types
    
    -a program requiring 4-byte integers may use type int on one system and type long on another

    -programs designed for portability often use typedef to create an alias for 4-byte integers, such as integer
        -the alias Integer can be changed once in the program to make the program work on both systems
*/

/*
    typedef vs. #define

    -in many instances, a typedef statement can be equivalently substituted by the appropiate #define statement

    #define Counter int; // has the same results as using a typedef as in the previous slide

    -we know that the #define is handled by the preprocessor

    -the typedef is handled by the C compiler
        -provides more flexibility when it comes to assigning names to derived data types

    -remember, the typedef statement does not actually define a new type
        -only a new type name
*/

#define int_pointer int *

int_pointer chalk, cheese; // same as int *chalk, cheese;

typedef char * char_ptr;

char_ptr Bently, Rolls_Royce;

int main(){
    return 0;
}

/*
    Best practices

    -do not bother using typedefs for structs
        -all they do is save you writing the word "struct", which is a clue that you probably shouldn't be hiding anyway

    -use typedefs for types that combine arrays,structs, pointers,or functions

    -use typedefs for portable types
        -when you need a types that's at least 20-bits, make it a typedef
            -when you port the code to different platforms, select the right type, short, int, long
                -making the change in just the typedef, rather than in every declaration

    -use typedefs for casting
        -a typedef can provide a simple name for a complicated type cast
    
    typedef int(*ptr_to_int_fun)(void);
    char * p;
    ...=(ptr_to_int_fun) p;

*/