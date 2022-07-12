/*
    Strings

    -a string constant or string literal is a sequence of character or symbols between a pair of double-quote characters
        -anything between a pair of double quotes is interpreted by the compiler as string
        -includes any special characters and embedded spaces
*/

/*
    Null Character

    -a special character with the code value 0 is added to the end of each string to mark where it ends
        -this character is known as the null character and you write it as \0

    -a string is always terminated by a null character, so the length of a string is always one greater than the number of characters in the string

    -don't confuse the null character with NULL
        -null character is a string terminator
        -NULL is a symbol that represents a memory address that doesn't reference anything

    -you cand add a \0 character to the end of a string explicitly
        -this will create two strings
*/

#include <stdio.h>

int main(void)
{
    printf("The character \0 is used to terminate a string.");
    return 0;
}
