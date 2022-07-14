/*
    Structures and Pointers

    -C allows for pointers to structures

    -pointers to structures are easier to manipulate than structures themselves

    -in some older implementations, a structure cannot be passed as an argument to a function, but a pointer to a structre can

    -even if you can pass a structure as an argument, passing a pointer is more efficient

    -many data representations use structures containing pointers to other structures
*/

/*
    Declaring a struct as a pointer

    -you can define a variable to be a pointer to a struct

    struct date *datePtr;

    -the variable datePtr can be assigned just like other pointers
        -you can set it to point to todaysDate with the assignment statement
    
    datePtr = &todaysDate;

    -you can then indirectly access any of the members of the date structure pointed to by datePtr

    (*datePtr).day=21;

    -the above has the effect of setting the day of the structure pointed to by datePtr to 21
        -parentheses are required because the structure member operator . has higher precedence than the indirection operator *
*/

/*
    Using structs as pointers

    -to test the value of month stored in the date structure pointed to by datePtr

    if ((*datePtr).month==12)

    -pointers to structures are so often used in C that a special operator exists
        -the structure pointer operator ->, which is the dash followed by the greather than sign, permits

    (*x).y

    to be more clearly expressed as

    x->y

    -the previous if statement can be conveniently written as

    if(datePtr->month == 12)
*/

#include <stdio.h>
#include <stdlib.h>

void example2();

struct date
{
    int month;
    int day;
    int year;
};

int main(void)
{
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month=9;
    datePtr->day=25;
    datePtr->year=2015;

    printf("Today's date is %i/%i/%.2i.\n", (*datePtr).month,datePtr->day,datePtr->year % 100);

    example2();

    return 0;
}

/*
    Structures containing pointers
    
    -a pointer also can be a member of a structure

    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    -a structure called intPtrs is defined to contain two integer pointers
        -the first one called p1
        -the second one p2

    -you can define a variable of type struct intPtrs

    struct intPtrs pointers;

    -the variable pointers can now be used just like other structs
        -pointers itself is not a pointer, but a structure variable that has two pointers as its members
*/

struct intPtrs
{
    int *p1;
    int *p2;
};

void example2(){
    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1=%i\n",i1,*pointers.p1);    
    printf("i2 = %i, *pointers.p2=%i\n",i2,*pointers.p2);
}

/*
    Character arrays or character pointers??

    struct names{
        char first[20];
        char last[20];
    };

    OR

    struct pnames{
        char * first;
        char * last;
    }

    -you can do both, however, you need to understand what is happening here

    struct names veep={"Talia","Summers"};
    struct pnames treas={"Brad","Fallingjaw"};
    printf("%s and %s\n", veep.first,treas.first);

    -the struct names variable veep
        -string are stored inside the structure
        -structure has allocated a total of 40 bytes to hold the two names

    -the struct pnames variables treas
        -strings are stored wherever the compiler stores string constants
        -the structure holds the addresses, which takes a total of 16 bytes on our system
        -the struct pnames structure allocates no space to store strings
        -it can be used only with strings that have had space allocated for them elsewhere
            -such as string constants or strings in arrays

    -the pointers in a pnames structure should be used only to manage strings that were created and allocated elsewhere in the program

    -one instance in which it does make sense to use a pointer in a structure to handle a string is if you are dynamically allocating that memory
        -use a pointer to store the address
        -has the advantage that you can ask malloc() to allocate just the amount of space that is needed for a string

    struct namect{
        char * fname; // using pointers instead of arrays
        char * lname;
        int letters;
    }

    -understand that the two strings are not stored in the structure
        -stored in the chunk of memory managed by mmalloc()
        -the addresses of the two strings are stored in the structure
        -addresses are what string-handling functions typically work with

    void getinfo(struct namect * pst)
    {
        char temp[SLEN];
        printf("Please enter your first name\n");
        s_gets(temp,SLEN)

        // allocate memory to hold name
        pst->fname = (char*) malloc (strlen(temp)+1);

        // copy name to allocated memory
        strcpy(pst->frame,temp);
        printf("Please enter your last name\n");
        s_gets(temp,SLEN);
        pst->lname=(char*) malloc(strlen(temp)+1);
        strcpy(pst->lname,temp);
    }
*/

