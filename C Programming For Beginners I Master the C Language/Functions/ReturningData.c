/*
    Returning data

    -you might not always want to have the results of your calculations displayed
        -functions can return data using specific syntax
        -should be familiar from previous experience with the main function

    Return_type Function_name(List of Parameters - separated by commas)
    {
        // Statements...
    }
*/

/*
    The return type

    -you can specify the type of value to be returned by a function as any of the legal types in C
        -includes enumeration types and pointers

    -the return type can also be type void which means no value is returned
*/

/*
    The return statement

    -the return statement provides the means of exiting from a function return;

    -this form of the return statement is used exclusively in a function where the return type has been declared as void
        -does not return a value

    -the more general form of the return statement is: return expression;

    -this form of return statement must be used when the return value type for the function has been declared as some type other than void

    -the value that is returned to the calling program is the value that results when expression is evaluated
        -should be of the return type specified for the function
*/

/*
    Returning data

    -a function that has statements in the functions body but does not return a value must have return type as void
        -will get an error message if you compile a program that contains a function with a void return type that tries to return a value

    -a function that does not have a void return type must return a value of the specified return type
        -will get an error message from the compiler if return type is different than specified

    -If expression results in a value that's a different type form the return type in the function header, the compiler will insert a conversion from the type of expression to the one requires
        -If conversion is not possible then the compiler will produce an error message
    
    -there can be more than one return statement in a function
        -each return statement must supply a value that is convertible to the type specified in the function header for the return value
*/

/*
    Invoking a function

    -you call a function by using the function name followed by the arguments to the function between parentheses

    -when you call the function, the values of the arguments that you specify in the call will be assigned to the parameters in the function

    -when the function executes, the computation proceeds using the values you supplied as arguments

    -the arguments you specify when you call a function should agree in type, number, and sequence with the paremeters in the function header
*/


/*
    Invoking a function and assigning data returned

    -If the function is used as the right side of an assignment statement, the return value supplied by the function will be substituted for the function
        -will also work with an expression
    
    int x = myFunctionCall();

    -the calling function doesn't have to recognize or process the value returned from a called function
        -up to you how you use any values returned from function calls
*/

#include <stdio.h>

int multiplyTwoNumbers(int x,int y)
{
    int result = x*y;
    return result;
}

int main(void)
{   
    int result=0;
    result = multiplyTwoNumbers(10,20);

    printf("result is %d\n",result);
    
    return 0;
}