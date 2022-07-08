/*
    -C supports many different types of variables and each type of variable is used for storing a kind of data
        -types that store integers
        -types that store nonintegral numerical values
        -types that store characters

    -Some examples of basic data types in C are:
        int
        float
        double
        char
        _Bool
    
    -the difference between the types is in the amount of memory they occupy and the range of values they can hold
        -the amount of storage that is allocated to store a particular type of data
        -depends on the computer you are running (machine-dependent)
        -an integer might take up 32 bits on your computer, on perhaps it might be stored in 64
*/

/*
    int
    -a variable of type int can be used to contain integral values only(values that do not contain decimal places)
    -a minus sign preceding the data type and variable indicates that the value is negative
    -the int type is a signed integer
        -it must be an integer and it can be positive, negative or zero
    -if an integer is preceded by a zero and the letter x (either lowercase or uppercaes), the value is taken as being expressed in hexadecimal (base 16) notation
        -int rgbColor = 0xFFEF0D;
    -the values 158, -10, and 0 are all valid examples of integer constants
        -no embedded spaces are permitted between the digits
        -values larger than 999 cannot be expressed using commas(12,000 must be written as 12000)
*/

/*
    float
    -A variable to be of type float can be used for storing floating-point numbers (values containing decimal places)
    -the values 3., 125.8, and -.0001 are all valid examples of floating-point constants that can be assigned to a variable
    -floating-point constants can aslo be expressed in scientific notation
        -1.7e4 is a floating-point value expressed in this notation and represents the value 1.7x10 to the power of 4
*/

/*
    double
    -the double type is the same as type float, only with roughly twice the precision
        -used whenever the range provided by a float variable is not sufficient
        -can store twice as many significant digits
        -most computers represents double values using 64 bits
    -all floating-point constants are taken as double values by the C compiler
    -To explicitly express a float constant, append either and f or F to the end of the number
        12.5f
*/

/*
    _Bool
    -the _Bool data type can be used to store just the values 0 or 1
        -used for indicating an on/off, yes/no, or true/false situation (binary choices)
    -_Bool variables are used in programs that need to indicate a Boolean condition
        -a variable of this type might be used to indicate wheter all data has been read from a file
    -0 is used to indicate a false value
    -1 indicates a true value
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    float alan = 23.333;
    double alan2 = 55.555555555555e+11;

    _Bool boolVariable = 1;
    bool myBoolean = true;
    bool anotherBoolean = false;

    return 0;
}

/*
    Other Data Types
    -the int type will probably meet most of your integer needs when beginning in C
    -However, C offers many other integer types
        -gives the programmer the option of matching a type to a particular use case
        -integer types vary in the range of values offered and in whether negative numbers can be used
    -C offers three adjective keywords to modify the basic integer type (can also be used by itself)
        -short, long, and unsigned
    -The type short int, or short may use less storage than int, thus saving space when only small numbers are needed
        -can be used when the program needs a lot of memory and the amount of available memory is limited
    -The type long int, or long, may use more storage than int, thus enabling you to express larger integer values
        -A constant value of type long int is formed by optionally appending the letter L(upper or lowercase) onto the end of an integer constant
            -long int numberOfPoints = 131071100L;
    -Type specifiers can also be applied to doubles
        -long double US_deficit_2017;
    -A long double constant is written as a floating constant with the letter I or L immediately following
        -1.234e+7L
    -The type unsigned int, or unsigned, is used for variables that have only nonnegative values(positive)
        -unsigned int counter;
        -the accuracy of the integer variable is extended
    -The keyword signed can be used with any of the signed types to make your intent explicit
        -short, short int, signed short, and signed short int are all names for the same type
*/