/*
    Local Variables

    -variables defined inside a function are known as automatic local variables
        -they are automatically "created" each time the function is called
        -their values are local to the function

    -the value of a local variable can only be accessed by the function in chich the variable is defined
        -its value cannot be accessed by any other function
    
    -if an initial value is given to a variable inside a function, that initial value is assigned to the variable each time the function is called

    -can use the auto keyword to be more precise, but, not necessary, as the compiler adds this by default

    -local variables are also applicable to any code where the variable is created in a block (loops,if statements)
*/

/*
    Global Variables

    -the opposite of a local variable

    -global variables value can be accessed by any function in the program

    -A global variable has the lifetime of the program

    -global variables are declared outside of any function
        -does not belong to any particular function

    -any function in the program can change the value of a global variable

    -if there is a local variable declared in a function with the same name,then,within that function the local variable will mask the global variable
        -global variable is not accessible and prevent it from being accessed normally.
*/

#include <stdio.h>

int myglobal=0; // global variable

int main()
{
    int myLocalMain=0; //loval variable
    // can access my global and myLocal
    return 0;
}

void myFunction()
{
    int x; // local variable
    // can access myGlobal and x, cannot access myLocal
}

/*
    Avoid using global variables

    -in general, global variables are a "bad" thing and should be avoided
        -promotes coupling between functions (dependencies)
        -hard to find the location of a bug in a program
        -hard to fix a bug once its found

    -use parameters in functions instead
        -If a lot of data, use a struct
*/