/*
    -structures in C provide another tool for grouping elements together
        -a powerful concept that you will use in many C programs that you develop

    -suppose you want to store a date inside a program
        -we could create variables for month, day, and year to store the date
    
    int month=9,day=25,year=25;

    -suppose your program also need to store the date of purchase of a particular item
        -you must keep track of three separate variables for each date that you use in the program
        -these variables are logically related and should be grouped together

    -it would be much better if you could somehow group these sets of three variables together
        -this is precisely what the structure in C allows you to do  
*/

/*
    Creating a structure

    -a structure declaration describes how a structure is put together
        -what elements are inside the structure

    -the struct keyword enables you to define a collection of variables of various types called a structure that you can treat as a single unit

    struct date
    {
        int month;
        int day;
        int year;
    }

    -the above statement defines what a date structure looks like to the C compilre
        -there is no memory allocation for this declaration

    -the variable names within the date structure, month, day, and year, are called members or fields
        -members of the structure appear between the braces that follow the struct tag name date
*/

/*
    Using a structure

    -the definition of date defines a new type in the language
        -variables can now be declared to be of type struct date
    
    struct date today;

    -you can now declare more variables of type struct date

    struct date purchaseDate;

    -the above statement declares a variable to be of type struct date
        -memory is now allocated for the variables above
        -memory is allocated for three integer values for each variable

    -be certain you understand the difference between defining a structure and declaring variables of the particular structure type
*/

/*
    Accessing members in a struct

    -now that you know how to define a structure and declare structure variables, you need to be able to refer to the members of a structure

    -a structure variable name is not a pointer
        -you need a special syntax to access the members

    -you refer to a member of a structure by writing the variable name followed by a period, followed by the member variable name
        -the period between the structure variable name and the member name is called the member selection operator
        -there are no spaces permitted between the variable name, the period, and the member name

    -to set the value of the day in the variable today to 25, you write

    today.day = 25;
    today.year = 2015;

    -to test the value of month to see if it is equal to 12

    if(today.month == 12)
        nextMonth = 1;
*/

#include <stdio.h>



int main()
{   
    struct date{
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2015;

    printf("Today's date is %i/%i/%.2i.\n",today.month,today.day,today.year % 100);

    return 0;
}

/*
    Structures in expressions

    -when it comes to the evaluation of expressions, structure members follow the same rules as ordinary variables do
        -division of an integer structure member by another integer is performed as an integer division

    century = today.year / 100 + 1;
*/  

/*
    Defining the structure and variable at the same time

    -you do have some flexibility in defining a structure
        -it is valid to declare a variable to be of a particular structure type at the same time that the structure is defined
        -include the variable name (or names) before the terminating semicolon of the structure definition
        -you can also assign initial values to the variables in the normal fashion

    struct date
    {
        int month;
        int day;
        int year;
    } today;

    -in the above, an instance of the structure, called today, is declared at the same time that the structure is defined
        -today is a variable of type date
*/

/*
    Un-named Structures

    -you also do not have to give a structure a tag name
        -If all of the variables of a particular structure type are defined when the structure is defined, the structure name can be omitted

    struct
    {   // Structure declaration and...
        int day;
        int year;
        int month;
    } today;    // ...Structure variable declaration combined

    -a disadvantage of the above is that you can no longer define instances of the structure in another statement
        -all the variables of this structure type that you want in your program must be defined in the one statement
*/

/*
    Initializing Structures

    -initializing structures is similar to initializing arrays
        -the elements are listed inside a pair of braces, with each element separated by a comma
        -the initial values listed inside the curly braces must be constant expression

    struct date today = {7,2,2015};

    -just like an array initialization, fewer values might be listed than are contained in the structure

    struct date date1 = {12,10};

    -sets date1.moth to 12 and date1.day to 10 but gives no initial value to date.year

    -you can also specify the member names in the initialization list
        -enables you to initialize the members in any order, or to only initialize specified members

    .member=value

    struct date date1 = {.month=12, .day=10};

    -set just the year member of the date structure variable today to 2015

    struct date today = {.year = 2015};
*/

/*
    Assignment with compound literals

    -you can assign one or more values to a structure in a single statement using what is known as compound literals

    today = (struct date){9,25,2015};

    -this statement can appear anywhere in the program
        -it is not a declaration statement
        -the type cast operator is used to tell the compiler the type of the expression
        -the list of values follows the cast and are to be assigned to the members of the structure, in order
        -listed in the same way as if you were initializing a structure variable
    
    -you can also specify values using the .member notation

    today = (struct date) {.month=9, .day=25, .year=2015};

    -the advantage of using this approach is that the arguments can appera in any order
*/