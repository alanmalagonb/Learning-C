/*
    The #define statement (constants)

    -the #define preprocessor directive (like all preprocessor directives), begins with the # symbol at the beginning of a line
        -can be preceded by spaces or tabs
        -allows for space between the # and the remainder of the directive

    -in c programming you can use this directive to define symbolic, or manifest, constants in a program

    -preprocessor directives run until the first newline following the #
        -a directive is limited to one line in length
        -the combination backslash/newline is deleted before preprocessing begins
            -you can spread the directive over several physical lines
                -these lines still constitute a single logical line
    
    -typically, #define statements appear first in the program
        -not requires, they can appear anywhere in the program

    -most programmers group their #define statements at the beginning of the program (or inside an include file)
        -they can be quickly referenced and shared by more than one source file

    -by convention, #define names are defined using only uppercase letters and underscores

    Example

    -one of the primary uses of the #define statement is to assign symbolic names to program constants

    #define YES 1

    -defines the name YES and makes it equivalent to the value 1

    -the name YES can subsequently be used anywhere in the program where the constant 1 could be used
        -it is the same as doing a search and replace with a text editor
            -the preprocessor replaces all occurrences of the defined name with its associated text

    -the #define statement has a special syntax
        -no equal sign used to assign the value 1 to YES
        -a semicolon does not appear at the end of the statement
    
    -whenever this name appears, its defined value of 1 is automatically substituted into the program by the preprocessor

    gameOver = YES;

    -this statement assigns the value of YES to gameOver
        -has the effect of assigning 1 to gameOver
    
    -a defined name is not a variable
        -you cannot assign a value to it, unless the result of substituting the defined value is in fact a variable
*/

/*
    #define expressions

    -a definition for a name can include more than a simple constant value

    -a definition for a name can include an expression

    -the following defines the name TWO_PI as the product of 2.0 and 3.141592654

    -you can subsequently use this defined name anywhere in a program where the expression 2.0 x 3.141592654 would be valid

    -you could replace the return statement of a circumference function with the following statement

    return TWO_PI * r;
*/

/*
    NULL define

    -the defined name NULL is frequently used by programmers to represent the null pointer

    -NULL is already defined on your system inside a file named <stddef.h>

    -by including a definition such as
    #define NULL 0

    -in a program, you can then write more readable statements, such as
    while(listPtr!=NULL)

    -to set up a while loop that will execute as long as the value of listPtr is not equal to the null pointer
*/

/*
    Benefits of #define

    -a better way of dealing with array bounds, which makes programs easier to extend, is to define a name for the upper array bound
    #define MAXIMUM_DATAVALUES 1000

    -you can subsequently define the dataValues array to contain MAXIMUM_DATAVALUES elements
    float dataValues[MAXIMUM_DATAVALUES];

    -Statements that use the upper array bound can also make use of this defined name
    for(i=0;i<MAXIMUM_DATAVALUES;++i)

    -you can now easily change the size of the dataValues array to 2,000 elements by simply changing the definition
    #define MAXIMUM_DATAVALUES 2000

    -if the program is written to use MAXIMUM_DATAVALUES in all cases where the size of the array was used
        -the preceding definition could be the only statement in the program that would have to be changed

    -another nice use of the #define statement is that it helps to make programs more portable from one computer system to another

    -it might be necessary to use constant values that are related to the particular computer on which the program is running
        -might have to do with the use of a particular computer memory address, a filename, or the number of bits contained in a computer word

    -if you want to execute a program on a different machine
        -where an int contains 64 bits as opposed to 32
            -can use a define to set this
        
    -in situations in which the program must be written to make use of machine-dependent values

    -the #define statement can help isolate machine-dependent values from the program as much as possible
        -would be easier to port to another machine
*/

/*
    #define vs. constant

    #define PI 3.14.159f

    -the above defines PI as a symbol that is to be replaces in the code by the string 3.14159f

    -we could have defined PI as a variable, but to tell the compiler that its value is fixed and must not be changed

    -you can fix the value of any variable when you declare it by prefixing the type name with the keyword const

    const float Pi = 3.14159f; // Defines the value of Pi as fixed

    -the advantage of defining Pi in this way is that you are now defining it as a constant numerical value with a specified type
*/