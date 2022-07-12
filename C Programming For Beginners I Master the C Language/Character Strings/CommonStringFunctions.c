/*
    String Functions

    -some of the more commonly performed operations on character strings include
        -getting the length of a string
            -strlen
        -copying one character string to another
            -strcpy() and strncpy()
        -combining two character strings together (concatenation)
            -strcat() and strncat()
        -determining if two character strings are equal
            -strcmp() and strncmp()

    -the C library supplies these string-handling function prototypes in the string.h header file
*/

/*
    Getting the length of a string

    -the strlen() function finds the length of a string
        -returned as a size_t
*/

#include <stdio.h>
#include <string.h>

void copyString();
void concatString();
void compareString();

int main(){
    char myString[] = "my string";

    printf("The length of this string is: %d\n", strlen(myString));

    copyString();

    concatString();

    compareString();

    return 0;
}

/*
    -this function does change the string
        -the function header does not use const in declaring the formal parameter string
*/

/*
    Copying strings

    -since you can not assign arrays in C, you can not assign strings either

    char s[100]; //declare
    s = "hello"; // initialize - DOESN'T WORK ('value required' error)

    -you can use the strcpy() function to copy a string to an existing string
        -the string equivalent of the assignment operator

    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    -the strcpy() function does not check to see wheter the source string actually fits in the target string
        -safer way to copy strings is to use strncpy()
    
    -strncpy() takes a third argument
        -the maximum number of characters to copy

    char src[40];
    char dest[12];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "Hello how are you doing");
    strncpy(dest, src, 10);
*/

void copyString(){
    char myString[] = "My name is Jackson";

    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);
    printf("The string is: %s\n", temp);
    printf("The length is: %d\n", strlen(myString));
}

/*
    String concatenation

    -the strcat() function takes two strings for arguments
        -a copy of the second string is tacked onto the end of the first
        -this combined version becomes the new first string
        -the second string is not altered

    -it returns the value of its first argument
        -the address of the first character of the string to which the second string is appended
    
    char myString[] = "my string";
    char input[80];

    printf("Enter a string to be concatenated:");
    scanf("%s",input);

    printf("\nThe string %s concatenated with %s is::::\n", myString, input);
    printf("%s",strcat(input,myString));

    - the strcat() function does not check to see whether the second string will fit in the first array
        -if you fail to allocate enough space for the first array, you will run into problems as excess characters overflow into adjacent memory location

    -use strncat() instead
        -takes a second argument indicating the maximum number of characters to add
    
    -for example, strncat(bugs,addon,13) will add the contents of the addon string to bugs, stopping when it reaches 13 additional characters or the null character, whichever comes first
*/

void concatString(){
    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest,src,15);

    printf("\nFinal destination string: |%s|\n",dest);
}

/*
    comparing Strings
    
    -suppose you want to compare someone response to a stored string
        -cannot use ==, will only check to see if the string has the same address

    -there is a function that compares string contents, not string addresses
        -it is the strcmp() (for string comparison) function
        -does not compare arrays, so it can be used to compare strings stored in arrays of different sizes
        -does not compare characters
            -you can use arguments such as "apples" and "A", but you cannot use character arguments, such as 'A'

    -this function does for strings what relational operators do for numbers
        -if returns 0 if its two string arguments are the same and nonzero otherwise
        -if return value < 0 then it indicates str1 is less than str2
        -if return value > 0 then it indicates str2 is less than str1
*/

void compareString(){
    printf("strcmp(\"A\" , \"A\") is ");
    printf("%d\n", strcmp("A","A"));

    printf("strcmp(\"A\" , \"B\") is ");
    printf("%d\n", strcmp("A","B"));

    printf("strcmp(\"B\" , \"A\") is ");
    printf("%d\n", strcmp("B","A"));

    printf("strcmp(\"C\" , \"A\") is ");
    printf("%d\n", strcmp("C","A"));

    printf("strcmp(\"Z\" , \"a\") is ");
    printf("%d\n", strcmp("Z","a"));

    printf("strcmp(\"apples\" , \"apple\") is ");
    printf("%d\n", strcmp("apples","apple"));
}

/*
    -the strcmp() function compares strings until it finds corresponding characters that differ
        -could take the search to the end of one of the strings

    -the strncmp() function compares the strings until they differ or until it has compared a number of characters specified by a third argument
        -if you wanted to search for strings that begin with "astro", you could limit the search to the first five characters
    
    if(strncmp("astronomy","astro",5)==0)
    {
        printf("Found: astronomy");
    }
    
    if(strncmp("astounding","astro",5)==0)
    {
        printf("Found: astounding");
    }
*/