/*
    Character Strings

    -C has no special variable type for strings
        -this means there are no special operator in the language for processing strings
        -the standard library provides an extensive range of functions to handle strings

    -strings in C are stored in an array of type char
        -characters in a string are stored in adjacent memory cells, one character per cell

    -to declare a string in C, simply use the char type and the brackets to indicate the size

    char myString[20];

    -this variable can accommodate a string that contains up to 10 characters
        -you must allow one element for the termination character (null character)

    -when you specify the dimension of an array that you intend to use to store a string, it must be at least one greater than the number of characters in the string that you want to store
        -the compiler automatically add \0 to the end of every string constant
*/

/*
    Initializing a String

    -You can initialize a string variable when you declare it

    char word[] = {'H','e','l','l','o','!'};

    -to initialize a string, it is the same as any other array initialization
        -in the absence of a particular array size, the C compiler automatically computes the number of elements in the array
            -based upon the number of initializer
            -this statement reserves space in memory for exactly seven characters
            -automatically adds the null terminator

    -you can specify the size of the string explicitly, just make sure you leave enough space for the terminating null character

    char word[7] = {"Hello!"};

    -If the size specified is too small, then the compiler can't fit a terminating null character at the end of the array, and it doesn't put one there (and it doesn't complain about it either)

    char word[6] = {"Hello!"};

    -Don't specify the size, let the compiler figure out, you can be sure it will be correct

    -you can initialize just part of an array of elements of type char with a string

    char str[40]="To be";

    -the compiler will initialize the first five elements, str[0] to str[4], with the characters of the string constant
        -str[5] will contain the null character, '\0'
        -space is allocated for all 40 elements of the array
*/

/*
    Assigning a value to a string after initializing

    -since you can not assign arrays in C, you can not assign string either

    -the following is an error:

    char s[100]; // declare
    s = "hello"; // initialize -DOESN'T WORK ('value required' error)

    -you are performing an assignment operation, and you cannot assign one array of characters to another array of characters like this
        -you have to use strncpy() to assign a value to a char array after it has been declared or initialized

    -the below is perfectly valid

    s[0] = 'h';
*/

/*
    Displaying a string
    
    -printf("\nThe message is: %s", message);
    -the %s format specifier is for outputting a null-terminated string
    -the printf() function assumes when it encounters the %s format characters that the corresponding argument is a character string that is terminated by a null character
*/

/*
    Inputting a string

    -to input a string via the keyboard, use the scanf function

    char input[10];
    printf("Please input your name: ");
    scanf("%s",input)

    -the %s format specifier is for inputting string
    -no need to use the &(address of operator) on a string
*/

/*
    Testing if two strings are equal

    -you cannot directly test two strings to see if they are equal with a statement such as
    if (string1 == string2)

    -the equality operator can only be applied to simple variable types, such as floats, ints, or chars
        -does not work on structures or arrays
    
    -to determine if two strings are equal, you must explicitly compare the two character strings character by character
        -we will discuss as easier way with the strcmp function
*/

#include <stdio.h>
int main(void)
{
    char str1[]="To be or not to be";
    char str2[]=",that is the question";
    unsigned int count = 0; // Stores the string length

    while(str1[count] != '\0') // Increment count till we reach the
        ++count;    // terminating character

    printf("The length of the string \"%s\" is %d characters.\n",str1,count);

    count = 0;  // Reset count for next string
    while(str2[count] != '\0')  // Count characters in second string
        ++count;
    
    printf("The length of the string \"%s\" is %d characters.\n",str2,count);

    return 0;
}