/*
    Converting Strings

    -it is very common to convert character case
        -to all upper case or all lower case

    -the toupper() function converts from lowercase to uppercase
    -the lower() function converts from uppercase to lowercase

    -both functions return either the converted character or the same character for characters that are already in the correct case or are not convertible as punctuation characters

    -this is how you convert a string to uppercase

    for(int i=0; (buf[i] = (char) toupper(buf[i])) != '\0'; ++i);

    -this loop will convert the entire string in the buf array to uppercase by stepping through the string one character at it
        -loop stops when it reaches the string termination character '\0'
        -the cast to type char is there because toupper() returns type int

    -you can use the function toupper() in combination with the strstr() function to find out whether one string occurs in another, ignoring case
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void convertStringToNumber();

int main(void)
{
    char text[100]; // Input buffer for string to be searched
    char substring[40]; // Input buffer for string sought

    printf("Enter the string to be searched (less than %d characters):\n",100);
    scanf("%s",text);

    printf("Enter the string sought (less than %d characters):\n",40);
    scanf("%s",substring);

    printf("\nFirst string entered:\n%s\n",text);
    printf("\nSecond string entered:\n%s\n",substring);

    // Convert both strings to uppercase.

    for(int i=0; (text[i] = (char) toupper(text[i])) != '\0'; ++i);
    for(int i=0; (substring[i] = (char) toupper(substring[i])) != '\0'; ++i);

    printf("The second string %s found in the first.\n", ((strstr(text,substring)==NULL)?"was not":"was"));

    convertStringToNumber();

    return 0;
}

/*
    Converting Strings to numbers

    -the stdlib.h header file declares functions that you can use to convert a string to a numerical value

    Function    Returns
    atof()      A value of type double that is produced from the string argument.
                Infinity as a double value is recognized from the strings "INF" or "INFINITY" where any character can be in uppercase or lowercase and 'not a number' is recognized from the string "NAN" in uppercase or lowercase
    atoi()      A value of type int that is produced from the string argument
    atol()      A value of type long that is produced from the string argument
    atoll()     A value of type lon long that is produced from the string argument

    For all four functions, leading whitespace is ignored

    char value_str[] = "98.4";
    double value = atof(value_str);
    
    Function    Returns
    strtod()    A value of type double is produced from the initial part of the string specified by the first argument.
                The second argument is a pointer to a variable, ptr say, of type char* in which the function will store the address of the first character following the substring that was converted to the double value.
                If no string was found that could be converted to type double, the variable ptr will contain the address passed as the first argument.
    strtof()    A value of type float. In all other respects it works as strtod()
    strtold()   A value of type long double. In all other respects it works as strtod()
*/

void convertStringToNumber(){
    double value = 0;
    char str[] = "3.5 2.5 1.26";    // The string to be converted
    char *pstr = str;   // Pointer to the string to be converted
    char *ptr = NULL;   // Pointer to character position after conversion

    while(true)
    {
        value = strtod(pstr, &ptr); // Convert starting at pstr
        if(pstr == ptr){    // pstr stored if no conversion..
            break;      // ..so we are done
        }   
        else
        {
            printf(" %f", value);   // Output the resultant valut
            pstr = ptr; // Store start for next conversion
        }
    }
}