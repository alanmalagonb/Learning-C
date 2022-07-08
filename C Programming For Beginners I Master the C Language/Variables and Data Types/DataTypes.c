/*
    Data Types
    -Some types of data in programs are numbers, letters or words
        -computer needs a way to identify and use these different kinds
    
    -a data type represents a type of the data which you can process using your program
        -examples include ints, floats, doubles, etc.
        -also correspond to byte sizes on the platform of your program
    
    -primitive data types are types that are not objects and store all sorts of data
*/

/*
    Declaring Variables
    -declaring a variable is when you specify the type of the variable followed by the variable name
        -specifies to the compiler how a particular variable will be used by the program
    -for example, the keyword int is used to declare the basic integer varaible
        -first comes int, and then the chosen name of the variable, and then a semicolon
            -type-specifier variable-name;
        -to declare more than one variable, you can declare each variable separately, or you can follor the int with a list of name in which each name is separated from the next by a comma
        -C requires that all program varaibles be declared before they are used in a program

    int x;
    int x,y,x;

    -The above create variables but does not provide values for the,
        -We can assign a variable a value by using the = operator
            x=112;
*/

/*
    Initializing Variables
    -To initialize a variable means to assign it a starting, or initial, value
    -This can be done as part of the declaration
        -follow the variable name with the assignment operator (=) and the value you want the variable to have
    int x=21;
    int y=32, z=14;
    int x, z=94; //Valid, but poor, form

    -In the last line, only z is initialized
        -it is best to avoid putting initialized and noninitialized variables in the same declaration statement

*/

#include <stdio.h>

int main()
{
    int alan = 5;

    alan = 8;

    return 0;
}