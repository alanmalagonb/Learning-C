/*
    Type Conversion
    -Conversion of data between different types can happen automatically (implicit conversion) by the  language or explicit by the program
    -Normally, you shouldn't mix types, but there are occasions when it is useful
    -Whenever a floating-point value is assigned to an integer variable in C, the decimal portion of the number gets truncated

    int x=0;
    float f=12.125;
    x=f; //value stored in x is the number 12, only the int portion is stored

    -Assigning an integer variable to a floating variable does not cause any change in the value of the number
        -value is converted by the system and stored in the floating variable
    -When performing integer arithmetic
        -if two operands in an expression are integers then any decimal portion resulting from a divicion operation is discarded, even if the result is assigned to a floating variable
        -if one operand is an int and  the other is a float then the operation is perfomed as a floating point operation
*/

/*
    Cast operator

    -Should usually steer clear of automatic type conversion, especially of demotions
        -better to do an explicit conversion

    -it is possible for you to demand the precise type conversion that you want
        -called a cast and consists of preceding the quantity with the name of the desired type in parentheses
        -parentheses and type name together constitute a cast operator, i.e. (type)
        -The actual type desired, such as long, is substituted for the word type
    -The type cast operator has a higher precedence than all the arithmetic operators except the unary minus and unary plis

    (int) 21.51 + (int) 26.99
        -is evaluated in C as
        21 + 26
*/

/*
    sizeof operator

    -You can find out how many bytes are occupied in memory by a given type by using the sizeof operator
        -sizeof is a special keyword in C

    -sizeof is actually an operator, and not a function
        -evaluated at compile time and not at runtime, unless a variable-length array is used in its argument
    
    -The argument to the sizeof operator can be a variable, an array name, the name of a basic data type, the name of a derived data type, or an expression

    -sizeof(int) will result in the number of bytes occupied by a variable of type int

    -Can also apply the sizeof operator to an expression
        -result is the size of the value that results from evaluating the expression

    -Use the sizeof operator wherever possible to avoid having to calculate and hard-code sizes into your program
*/

/*
    Other Operators

    -the asterisk "*" is an operator that represents a pointer to a variable
    *a;

    - ? : is an operator used for comparisons
        -if condition is true ? then value X : otherwise value Y
        -name is the ternary operator
*/