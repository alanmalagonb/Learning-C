/*
    -the static storage class can be used on local and global variables, as well as functions
    
    -when applied to local variables it instructs the compiler to keep the variable in existence during the life-time of the program

    -when applied to global variables, the static modifier causes that variable's scope to be restricted to the file in which it is declared

    -when applied to functions, the static function can be called only from within the same file as the function appears
*/

/*
    Automatic and static variables (local statics)

    -we know that when you normally declare a local variable inside a function
        -you are declaring automatic local variables
        -recall that the keyword auto can, in fact, precede the declaration of such variables (optional)
        -an automatic variable is actually created each time the function is called and destroyed upon exit of the function
    
    -automatic local variables can be given initial values
        -the value of the expression is calculated and assigned to the automatic local variable each time the function is called
        -because an automatic variable disappears after the function completes execution, the value of that variable disappears along with it
        -the value an automatic variable has when a function finishes execution is guaranteed not to exist the next time the function is called

    -static variables have a property of preserving their value even after they are out of their scope
        -static variables preserve the value of their last use in their scope
        -no new memory is allocated because ther are not re-declared
        -their scope is local to the function to which they were defined
    
    -making local variables static allows them to maintain their values between function calls
        -does not create and destroy the local variable each time it comes into and goes out of scope  
*/

#include <stdio.h>
#include "fooStatic.c"

static int fun(){
    static int count = 0;  
    int localvar=0;
    printf("automatic = %d, static = %d\n", localvar,count);

    count++;
    localvar++;
    return count;
}

int main(){
    for (int i = 0; i < 5; i++)
    {
        fun();
    }
    
    //printf("%d ", fun());
    //printf("%d ", fun());
    return 1;
}

/*
    Initialization of local statics

    -a static, local variable is initialized only once at the start of overall program execution
        -not each time that the function is called
    
    -the initial value specified for a static variable must be a simple constant or constant expression

    -static variables also have default initial values of zero, unlike automatic variables, which have no default initial value

    -static variables are allocated memory on the heap, not on the stack
*/

/*
    Static Versus Extern Variables (global statics)

    -there are situations that arise in which you want to define a variable to be global but on external

    -you want to define a global variable to be local to a particular module (file)
        -it makes sense to want to define a variable this way if no functions other than those contained inside a particular file need access to the particular variable
    
    -In these situations, you should define the variable to be static
        -by default, they are assigned the value 0 by the compiler

    -if the below declaration is made outside of any function
        -makes the value of the variable accessible from any subsequent point in the file in which the definition appears
            -not from functions contained in other files

    static int moveNumber = 0;

    -if you need to define a global variable whose value does not have to be accessed from another file
        -declare the variable to be static
        -a cleaner approach to programming

    -the static declaration more accurately reflects the variable's usage
        -no conflict can be created by two modules that unknowingly both use different external global variables of the same name
*/

/*
    Static and Extern Variables on functions

    -when a function is defined, it can be declared to be extern or static 
        -extern case being the default

    -a static function can be called only from within the same file as the function appears

    static double foo(double x){...}

    -the definition of the foo function effectively becomes local to the file in which it is defined
        -cannot be called from outside the file
*/

/*
    static and structures

    -static variables should not be declared inside a structure

    -the C compiler requires the entire structure elements to be placed together
        -memory allocation for structure members should be contiguous

    -it is possible to declare a structure
        -inside a function (stack segment)
        -allocate memory dynamically (heap segment)
        -it can be even global

    -whatever might be the case, all structure members should reside the same memory segment
        -the value for the structure element is fetched by counting the offset of the element from the beginning address of the structure

    -separating out one member alone to a data segment defeats the purpose of a static variable

    -it is possible to have an entire structure as static
*/