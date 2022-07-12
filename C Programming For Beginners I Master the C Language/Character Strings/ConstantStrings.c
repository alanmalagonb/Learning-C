/*
    Constant Strings

    -sometimes you need to use a constant in a program

    circumference = 3.14159 * diameter;

    -the constant 3.14159 represents the world-famous constant pi

    -there are good reasons to use a symbolic constant instead of just typing in the number
        -a name tells you more than a number does

    owed=0.015 * housevalue;
    owed=taxrate * housevalue;

    -if you read through a long program, the meaning of the second version is plainer.

    -suppose you have used a constant in several places, and it becomes necessary to change its value
        -you only need to alter the definition of the symbolic constant, rather than find and change every occurrence of the constant in the program
*/

/*
    #define

    -the preprocessor lets you define constants

    #define TAXRATE 0.015

    -when your program is compiled, the value 0.015 will be substitute everywhere you have used TAXRATE
        -compile-time substitution
    
    -a defined name is not a variable
        -you cannot assign a value to it
    
    -notice that the #define statement has a special syntax
        -no equal sign used to assign the value 0.015 to TAXRATE
        -no semicolon

    -#define statements can appear anywhere in a program
        -no such thing as a local define
        -most programmers group their #define statements at the beginning of the program (or inside an include file) where they can be quickly referenced and shared by more than one source file

    -the #define statement helps to make programs more portable
        -it might be necessary to use constant values that are related to the particular computer on which the program is running
    
    -the #define statement can be used for character and string constants

    #define BEEP '\a'
    #define TEE 'T'
    #define ESC '\033'
    #define OOPS "Now you have done it!"
*/

/*
    const

    -C90 added a second way to create symbolic constants
        -using the const keyword to convert a declaration for a variable into a declaration for a constant

    const int MONTHS = 12; // MONTHS a symbolic constant for 12

    -const makes MONTHS into a read-only value
        -you can display MONTHS and use it in calculation
        -you cannot alter the value of MONTHS

    -const is a newer approach and is more flexible than using #define
        -it lets you declare a type
        -it allows better control over which parts of a program can use the constant
    
    -C has yet a third way to create symbolic constants
        -enums

    -initializing a char arrray and declaring it as constant is a good way of handling standard messages

    const char message[] = "The end of the world is nigh.";

    -because you declare message as const, it's protected from being modified explicitly within the program
        -any attempt to do so will result in an error message from the compiler

    -this technique for defining standard messages is particularly useful if they are used in many places within a program
        -prevents accidental modification of such constants in other parts of the program
*/