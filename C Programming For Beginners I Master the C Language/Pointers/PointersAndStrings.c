/*
    -we now know how arrays relate to pointers and the concept of pointer arithmetic

    -these concepts can be very useful when applied to character arrays (strings)

    -one of the most common application of using a pointer to an array is as a pointer to a character string
        -the reasons are one of notational convenience end efficiency
        -using a variable of type pointer to char to reference a string gives you a lot of flexibility
*/

/*
Example (array parameter vs char * parameter)

#include <stdio.h>

void copyString(char to[], char from[])
{
    int i;

    for(i=0; from[i]!='\0'; ++i)
        to[i] = from[i];

    to[i] = '\0';
}

void copyString(char *to, char *from)
{
    for( ; *from !='\0'; ++from, ++to)
        *to = *from;

    *to = '\0';
}

int main()
{
    
}
*/

/*
    char arrays as pointers

    -if you have an array of characters called text, you could similarly define a pointer to be used to point to elements in text

    char *textPtr;

    -if textPtr is set pointing to the beginning of an array of chars called text

    ++textPtr;

    -the above set textPtr pointing to the next character in text, which is text[1]

    --textPtr;

    -the above sets textPtr pointing to the previous character in text, assuming that textPtr was not pointing to the beginning of text prior to the execution of this statement
*/

#include <stdio.h>

void copyString(char *to, char *from)
{
    while(*from)    // the null character is equal to the value 0, so will jump out then
        *to++ = *from++;
    
    *to = '\0';
}

int main (void)
{
    char string1[] = "A string to be copied";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);
}