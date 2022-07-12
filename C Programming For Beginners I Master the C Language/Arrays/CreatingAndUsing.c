/*
    Arrays
    -Store many data values of a specified type
    -Arrays allow you to group values together under a single name
        -you do not need separate variables for each item of data
    -an array is a fixed number of data items that are all of the same type
*/

/*
    Declaring an Array
    -the data items in an array are referred to as elements
    -the elements in an array have to be the same type 
        -you cannot "mix" data types, no such thing as a simple array of ints and doubles 

    -declaring to use an array in a program is similar to a normal variable that contains a single value
        -difference is that you need a number between square brackets [] following the name
    
    long numbers[10];

    -the number between square brackets defines how many elements the array contains
        -called the size of the array or the array dimension
*/

/*
    Accessing an array's elements
    -each of the data items stored in an array is accessed by the same name

    -you select a particular element by using an index (subscript) value between square brackets following the array name

    -index values are sequential integers that start from zero
        -index values for elements in an array of size 10 would be from 0-9
        -Arrays are zero based
            -0 is the index value for the first array element
            -for an array of 10 elements, index value 9 refers to the last element

    -It is a very common mistake to assume that arrays start from one
        -referred to as the off-by-one error
        -you can use a simple integer to explicitly reference the element that you want to access
        -to access the fourth value in an array, you use the expression arrayName[3]

    -You can also specify an index for an array element by an expression in the squaare brackets following the array name
        -the expression must result in an integer value that corresponds to one of the possible index values

    -it is very common to use a loop to access each element in an array
*/

/*
    Array out of bounds

    -if you use an expression or a variable for an index value that is outside the range for the array, your program may crash or the array can contain garbage data
        -referred to as an out of bounds error
    
    -the compiler cannot check for out of bounds errors so your program will still compile

    -very important to ensure that your array indexes are always within bounds
*/

/*
    Assigning values to an Array
    
    -a value can be stored in an element of an array simply by specifying the array element on the left side of an equal sign

    grades[100]=95

    -the value 95 is stored in element numbers 100 of the grades array

    -can also use variables to assign values to an array
*/

#include <stdio.h>

int main(void)
{
    int grades[10]; // Array storing 10 values
    int count = 10;
    long sum = 0;
    float average = 0.0f; // Average of the numbers

    printf("\nEnter the 10 grades:\n"); // Prompt for the input

    // Read the ten numbers to be averaged
    for(int i=0; i<count; ++i)
    {
        printf("%2u> ",i+1); 
        scanf("%d",&grades[i]); // Read a grade
        sum+=grades[i]; // Add it to sum
    }

    average = (float) sum/count; // average
    printf("\nAverage of the ten grades entered is: %.2f\n",average);
    
    return 0;
}



