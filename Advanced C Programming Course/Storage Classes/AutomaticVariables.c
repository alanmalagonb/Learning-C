/*
    Storage Classes

    -storage classes are used to describe the features of a variable/function
        -include the scope, visibility and life-time
        -help us to trace the existence of a particular variable during the runtime of a program

    -the lifetime of a variable is the time period during which variable exist in computer memory
        -some exist briefly, some are repeatedly created and destroyed, and others exist for the entire execution of a program

    -the scope of the variable is where the variable can be referenced in a program
        -some can be referenced throughout a program, others from only portions of a program

    -a variable's visibility or linkage, determines for a multiple-source-file program whether the identifier is known only in the current source file or in any source file with proper declarations
*/

/*
    Auto Storage Class

    -C provides four storage classes, indicated by their storage class specifiers
        -auto
        -register
        -extern
        -static

    -the four storage-class specifiers can be split into two storage durations  
        -automatic storage duration
        -static storage duration
    
    -keyword auto is used to declare variables of automatic storage duration
        -created when the block in which they are defined is entered
        -exist while the block is active
        -destroyed when the block is exited
*/

/*
    Local Variables

    -are declared within a function body or block of code

    -have automatic storage duration by default

    -so, these variables are known as automatic local variables
        -they are automatically created each time the function is called
        -their values are local to the function

    -the value of a local variable can only be accessed by the function in which the variable is defined
        -Its value cannot be accessed by any other function
        -If an initial value is given to a variable inside a function, that initial value is assigned to the variable each time the function is called

    -the C compiler assumes by default that any variable defined inside a function is an automatic local variable
        -the keyword auto is seldom used
    
    -C++ has repurposed the auto keyword for a quite different use, so simply not using auto as a storage-class specifier is ebtter for C/C++ compatibility

    -you can, however, make your intentions perfectly clear by explicitly using the keyword auto before the definition of the variable
        -you might do this to document that you are intentionally overriding an external variable definition
        -or that it is important not to change the variable to another storage class
*/

/*
    Why use Auto?

    -automatic storage is a means of conserving memory
        -automatic variables exist only when they are needed
        -they are created when the function in which they are defined is entered
        -they are destroyed when the function is exited

    -automatic storage is an example os the principle of least privilege
        -allowing access to data only when it is absolutely needed

    -why have variables stored in memory and accessible when in fact they are not needed?
*/

/*
    Syntax

    -storage classes precede the type of the variable

    -to specify the storage class for a variable, the following syntax is to be followed

    storage_class var_data_type var_name;

    -the following declaration indicates that double variables x and y are automatic local variables
        -they exist only in the body of the function which the declaration appears
    
    auto double x,y;
*/

#include <stdio.h>

int main() {
    auto int x; //local variable
    int m; // m in scope

    scanf("%d", &m);
    {
        int i; // both m and i in scope
        int n=5;

        for(i=m;i<n;i++){
            int i;
        }
    }
    return 0;
}

char *myFunction() {
    char x[] = "apple";
    return x;
}

int func_name()
{
    int y; // local variable
    return y;
}

