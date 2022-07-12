/*
    Arguments and parameters

    -a parameter is a variable in a function declaration and function definition/implementation

    -when a function is called, the arguments are the data you pass into the functions parameters.

    -the actual value of a variable that gets passed to the function

    -function parameters are defined within the function header
        -are placeholders for the arguments that need to be specified when the function is called

    -the parameters for a function are a list of parameter names with their types
        -each parameter is separated by a comma
        -entire list of parameters is enclosed between the parentheses that follow the function name

    -a function can have no parameters, in which case you should put void between the parentheses

    -parameters provide the means to pass data to a function
        -data passed from the calling function to the function that is called

    -the names of the parameters are local to the function
        -they will assume the values of the arguments that are passed when the function is called

    -the body of the function should use these parameters in its implementation

    -a function body may have additional locally defined variables that are needed by the function's implementation

    -when passing an array as an argument to a function
        -you must also pass an additional argument specifying the size of the array
        -the function has no means of knowing how many elements there are in the array
*/

#include <stdio.h>

void multiplyTwoNumbers(int x,int y)
{
    int result = x*y;
    printf("The product of %d multiplied by %d is: %d\n",x,y,result);
}

int main(void)
{
    multiplyTwoNumbers(10,20);
    multiplyTwoNumbers(20,30);
    multiplyTwoNumbers(50,2);

    return 0;
}