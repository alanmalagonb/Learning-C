/*
    -Very useful to ask the user enter data into a program
        -via the terminal/console
    -The C library contains several input functions, and scanf() is the most general of them
        -can read a variety of formats
    -reads the input from the standard input stream stdin and scans that input according to the format provided
        -format can be a simple constrant string, but you can specify %s, %d, %c, %f, etc., to read strings, integer, character or floats
    -If the stdin is input from the keyboard then text is read in because the keys generate text characters: letters, digits, and punctuation
        -when you enter the integer 2014, you type the characters 2 0 1 and 4
        -If you want to store that as a numerical value rather than a string, your program has to convert the string character-by-character to a numerical value and this is the job of the scanf function      
*/

/*
    scanf()
    -like printf(), scanf() uses a control string followed by a list of arguments
        -control string indicates the destination data types for the input stream of characters
    -the printf() function uses variable names, constrants, and expressions as its argument list
    -the scanf() function uses pointers to variables
        -you do not have to know anything about pointers to use the function

    -3 rules abouts scanf
        -returns the number of items that it successfully reads
        -If you use scanf() to read a value for one of the basic variable types we've discussed, precede the variable name with an &
        -If you use scanf() to read a string into a character array, don't use an &
    -The scanf() function uses whitespace(newlines, tabs and spaces) to decide how to divide the input into separate fields
    -scanf is the inverse of printf(), which converts integers, floating-point numbers, characters, and C strings to text that is to be displayed on screen
    -when a program uses scanf to gather input from the keyboard, it waits for you to input some text
        -when you enter some text and press enter, then program proceeds and reads the input
    -Remember, scanf() expects input in the same format as you provided %s and %d
        -you have to provide valid inputs like "string integer"
*/

// Example

#include <stdio.h>
int main(){

    char str[100];
    int i;

    printf("Enter a value:");
    scanf("%s %d",str,&i);
    
    printf("\nYou entered: %s %d\n",str,i);

    double x;
    
    printf("Enter a value:");
    scanf("%lf", &x);
    printf("X: %lf",x);

    return 0;
}