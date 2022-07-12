/*
    Common C Mistakes

    -omitting a closing parenthesis or closing quotation marks on any statement

    total_earning=(cash+(investments*inv_interest) + (saving*sav_interest);
    printf("Your total money to date is %.2f, total_earning");

    -the use of embedded parentheses to set apart each portion of the equation makes for a more readable line of code
        -however, there is always the possibility of missing a closing parenthesis(or in some occasions, adding one too many)
    
    -the second line is missing a closing quotation mark for the string being sent to the printf() function

    -both of these will generate a compiler error
        -sometimes the error will be identified as coming on a different line
        -depending on whether the compiler uses a parenthesis or quotation mark on a subsequent line to complete the expression which move the missing character to a place later in the program
*/
