/*
    pass by value

    -there are a few different ways you can pass data to a function
        -pass by value
        -pass by reference
    
    -pass by value is when a function copies the actual value of an argument into the formal parameter of the function
        -changes made to the parameter inside the function have no effect on the argument
    
    -C programming uses call by value to pass arguments
        -means the code within a function cannot alter the arguments used to call the function
        -there are no changes in the values, though they had been changed inside the function
*/

// Example, pass by value

#include <stdio.h>

void swap2(int *x, int *y);

// function definition to swap the values
void swap(int x, int y)
{
    int temp;

    temp = x; // save the value of x
    x = y; // put y into x
    y = temp; // put temp into y

    return;
}

int main()
{
    // local variable definition
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d\n",a);
    printf("Before swap, value of b: %d\n",b);

    // calling a function to swap the values
    swap(a,b);

    printf("After swap, value of a: %d\n",a);
    printf("After swap, value of b: %d\n",b);

     // calling a function to swap2 the values
    swap2(&a,&b);

    printf("After swap2, value of a: %d\n",a);
    printf("After swap2, value of b: %d\n",b);

    return 0;
}

/*
    Passing data using copies of pointers

    -pointers and functions get along quite well together
        -you can pass a pointer as an argument to a function and you can also have a function return a pointer as its result

    -pass by reference copies the address of an argument into the formal parameter
        -the address is used to access the actual argument used in the call
        -means the changes made to the parameter affect the passed argument

    -to pass a value by reference, argument pointers are passed to the functions just like any other value
        -you need to declare the function parameters as pointer types
        -changes inside the function are reflected outside the function as well
        -unlike call by value where the changes do not reflect outside the function
*/

void swap2(int *x, int *y)
{
    int temp;
    temp = *x; // save the value at address x
    *x = *y; // put y into x
    *y = temp; // put temp into y

    return;
}

/*
    Summary of syntax

    -you can communicate two kinds of information about a variable to a function

    function1(x);

    -you transmit the value of x and the function must be declared with the same type as x

    int function1(int num)

    function2(&x);

    -you transmit the address of x and requires the function definition to include a pointer to the correct type

    int function2(int * ptr)
*/

/*
    const pointer parameters

    -you can qualify a function parameter using the const keyword
        -indicates that the function will treat the argument that is passed for this parameter as a constant
        -only useful when the parameter is a pointer

    -you apply the const keyword to a parameter that is a pointer to specify that a function will not change the value to which the argument points

    bool sendMessage(const char* pmessage)
    {
        //Code to send the message
        return true;
    }

    -the type of the parameter, pmessage, is a pointer to a const char
        -it is the char value that's const, not its address
        -you could specify the pointer itself as const too, but this makes little sense because the address is passed by value
            -you cannot change the original pointer in the calling function
    
    -the compiler knows that an argument that is a pointer to constant data will be safe
*/


/*
    returning pointers from a function

    -returning a pointer from a function is a particularly powerful capability
        -it provides a way for you to return not just a single value, but a whole set of values

    -you would have to declare a function returning a pointer

    int * myFunction(){
        .
        .
        .
    }

    -be careful though, there are specific hazards related to returning a pointer
        -use local variables to avoid interfering with the variable that the argument points to

*/