/*
    Enums
    -a data type that allows a programmer to define a variable and specify the valid values that could be stored into that varaible
        -can create a variable named "myColor" and it can only contain one of the primary colors, red, yellow, or blue, and no other values
    
    -Your first have to define the enum type and give it a name
        -initiated by the keyword enum
        -then the name of the enumarated data type
        -then list of identifiers (enclosed in a set of curly braces) that define the permissible values that can be assigned to the type
    
    enum primaryColor {red,yellow,blue};

    -variable declared to be of this data type can be assigned the values red, yellow and blue inside the program, and no other values

    -To declare a variable to be a type enum primaryColor
        -use the keyword enum
        -followed by the enumerated type name
        -followed by the variable list. So the statement

    -enum primaryColor myColor, gregsColor;

    -defines the two variables myColor and gregsColor to be of type primaryColor
        -the only permissible values that can be assigned to these variables are the names red, yellow, and blue
        -myColor = red;
    
    Another example

    enum month {January, February, March, April, May, June, July, August, September, October, November, December};
*/

/*
    Enums as ints

    -the compiler actually treats enumeration identifiers as integer constants
        -first name in list is 0

    enum month thisMonth;
    ...
    thisMonth = Febraury;

    -the value 1 is assigned to thisMonth (and not the name Febraury) because it is the second identifier listed inside the enumeration list
    -if you want to have a specific integer value associated with an enumeration identifier, the integer, can be assigned to the identifier when the data type is defined

    enum direction {up,down,left = 10,right};

    -an enumerated data type direction is defined with the values up, down, left, and right
    -up=0 because it appears first in the list
    -1 to down because it appears next
    -10 to left because it is explicitly assigned this value
    -11 to right because it appears immediately after left in the list
*/

/*
    Char

    -Represent a single character such as the letter 'a', the digit character '6', or a semicolon (';')
    -Character literals use single quotes such as 'A' or 'Z'
    -You can also declare char variables to be unsigned
        -can be used to explicitly tell the compiler that a particular variable is a signed quantity
*/

/*
    Declaring a char
    
    char broiled; // declare a char variable
    broiled = 'T' // OK
    broiled = T; // NO! Thinks T is a variable
    broiled = "T"; // NO! Thinks "T" is a string

    -If you omit the quotes, the compiler thinks that T is the name of a variable;
    -If you use double quotes, it thinks you are using a string
    -you can also use the numerical code to assign values

    char grade = 65 // ok for ASCII, but poor style
*/

/*
    Escape Characters
    -C contains special characters that represent actions
        -backspacing
        -going to the next line
        -making the terminal bell ring(or speaker beep)
    
    -We can represent these actions by using special symbol sequences
        -called escape sequences
    
    -Escape sequences must be enclosed in single quotes when assigned to a character variable
    char x = '\n'

    -and then print the variable x to advance the printer or screen one line

    Sequence   Meaning
    \a Alert (ANSI C)
    \b Backspace
    \f Form feed
    \n Newline
    \r Carriage return
    \t Horizontal tab
    \v Vertical tab
    \\ Backslash (\)
    \' Single quote (')
    \" Double quote (")
    \? Question mark (?)
    \0oo Octal value (o represents an octal digit)
    \xhh Hexadecimal value (h represents a hexadecimal digit)

*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    bool isMale = (myGender == anotherGender);

    char myCharacter = '\n';

    printf("%c", myCharacter);

    return 0;
}
