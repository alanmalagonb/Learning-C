/*
    More string functions

    -searching a string
        -the string.h header file declares several string-searching functions for finding a single character or a substring
            -strchr() and strstr()

    -tokenizing a string
        -a token is a sequence of characters within a string that is bounded by a delimiter(space,comma,period,etc)
        -breaking a sentence into words is called tokenizing
        -strtok()
    
    -analyzing strings
        -islower(),isupper(),isalpha(),isdigit(),etc.
*/

/*
    concept of a pointer

    -C provides a remarkably useful type of variable called a pointer
        -a variable that stores and address
        -its value is the address of another location in memory that can contain a value
        -we have used addresses in the past with the scanf() function

        int Number = 25;
        int *pNumber = &Number;

    -above, we declared a variable, Number, with the value 25

    -we declared a pointer, pNumber, which contains the address of Number
        -asterisk used in declaring a pointer

    -to get the value of the variable pNumber, you can use the asterisk to dereference the pointer
        -*pNumber = 25
        -*is the dereference operator, and its effect is to access the data stored at the address specified by a pointer

    -the value of &Number is the address where Number is located
        -this value is used to initialize pNumber in the second statement
    
    -many of the string functions return pointers
*/

/*
    Searching a string for a character

    -the strchr() function searches a given string for a specified character
        -first argument to the function is the string to be searched (which will be the address of a char array)
        -second argument is the character that you are looking for

    -the function will search the string starting at the beginning and return a pointer to the first position in the string where the character is found
        -the address of this position in memory
        -is of type char* described as the "pointer to char."

    -to store the value that's returned, you must create a variable that can store the address of a character

    -if the character is not found, the function returns a special value NULL
        -NULL is the equivalent of 0 for a pointer and represents a pointer that does not point to anything
*/

/*
    strchr()
    
    -you can use the strchr() function like this

    char str[] = "The quick brown fox"; // The string to be searched
    char ch = 'q';  // The character we are looking for
    char *pGot_char = NULL; // Pointer initialized to NULL
    pGot_char = strchr(str, ch);    //Stores address where ch is found

    -the first argument to strchr() is the address of the first location to be searched
        -second argument is the character that is sought (ch,which is of type char)
        -expects its second argument to be of type int, so the compiler will convert the value of ch to this type
        -could just as well define ch as type int (int ch = 'q';)
        -pGot_char will point to the value ("quick brown fox")
*/

/*
    Searching for a substring

    -the strstr() function is probably the most useful of all the searching frunctions
        -searches one string for the first occurrence of a substring
        -returns a pointer to the position in the first string where the substring is found
        -if no match, returns NULL

    -the first argument is the string that is to be searched
    -the second argument is the substring you're looking for

    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    
    -searches text for the first occurrence of the string stored in word
        -the string "dog" appears starting at the seventh character in text
        -pFound will be set to the address text + 6 ("dog has his day")
        -search is case sensitive, "Dog" will not be found
*/

/*
    Tokenizing a string

    -a token is a sequence of characters within a string that is bound by a delimiter

    -a delimiter can be anything, but, should be unique to the string
        -spaces, commas, and a period are good examples
    
    -breaking a sentence into words is called tokenizing

    -the strtok() function is used for tokenizing a string

    -It requires two arguments
        -string to be tokenized
        -a string containing all the possible delimiter characters
*/

#include <stdio.h>
#include <string.h>

void analyzingStrings();

int main()
{
    char str[80] = "Hello how are you - my name is - alan";
    const char s[2] = "-";
    char *token;

    // get the first token
    token = strtok(str, s);

    // walk through other tokens
    while(token!=NULL){
        printf(" %s\n", token);

        token = strtok(NULL, s);
    }

    analyzingStrings();

    return (0);
}

/*
    Analyzing strings

    Function    Tests for
    islower()   Lowercase letter
    isupper()   Uppercase letter
    isalpha()   Uppercase or lowercase letter
    isalnum()   Uppercase or lowercase letter or a digit
    iscntrl()   Control character
    isprint()   Any printing character including space
    isgraph()   Any printing character except space
    isdigit()   Decimal digit ('0' to '9')
    isxdigit()  Hexadecimal digit ('0' to '9', 'A' to 'F', 'a' to 'f')
    isblank()   Standard blank characters (space, '\t')
    isspace()   Whitespace character (space, '\n', '\t', '\v', '\r', '\f')
    ispunct()   Printing character for which isspace() and isalnum() return false

    -the argument to each of these functions is the character to be testes
    -all these functions return a nonzero value of type int if the character is within the set that's being tested for
    -these return values convert to true and false, respectively, so you can use them as Boolean values
*/

void analyzingStrings()
{
    char buf[100];  // input buffer
    int nLetters = 0;   // Number of letters in input
    int nDigits = 0;    // Number of digits in input
    int nPunct = 0; // Number of punctuation characters

    printf("Enter an interesting string of less than %d characters:\n",100);
    scanf("%s",buf);    // Read a string into buffer

    int i = 0;  // Buffer index

    while(buf[i])
    {
        if(isalpha(buf[i]))
            ++nLetters; // Increment letter count
        else if(isdigit(buf[i]))
            ++nDigits;  // Increment digit count
        else if(ispunct(buf[i]))
            ++nPunct;
        ++i;
    }
    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);
}