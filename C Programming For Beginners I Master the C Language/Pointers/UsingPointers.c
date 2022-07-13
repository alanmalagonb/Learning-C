/*
    -C offers several basic operations you can perform on pointers

    -you can assign an address to a pointer
        -assiged value can be an array name, a variable preceded by address operator (&), or another second pointer.

    -you can dereference a pointer
        -the * operator gives the value stored in the pointed-to location

    -you can takea pointer address
        -the & operator tells you where the pointer itself is stored

    -you can perform pointer arithmetic
        -use the + operator to add an integer to a pointer to an integer (integer is multiplied by the number of bytes in the pointed-to type and added to the original address)
        -increment a pointer by one (useful in arrays when moving to the next element)
        -use the - operator to subtract an integer from a pointer (integer is multiplied by the number of bytes in the pointed-to type and subtracted from the original address)
        -decrementing a pointer by one (useful in arrays when going back to the previous element)   

    -you cand find the difference between two pointers
        -you do this for two pointers to elements that are in the same array to find out how far apart the elements are

    -you can use the relational operators to compare the values of two pointers
        -pointers must be the same type

    -remember, there are two forms of subtraction
        -you can subtract one pointer from another to get an integer
        -you can subtract an integer from a pointer and get a pointer

    -be careful when incrementing or decrementing pointers and causing an array "out of bounds" error
        -computer does not keep track of whether a pointer stll points to an array element 
*/

/*
    pointers used in expressions
    
    -the value referenced by a pointer can be used in an arithmetic expressions
        -if a variable is defined to be of type "pointer to integer" then it is evaluated using the rules of integer arithmetic

    int number=0;   // A variable of type int initialized to 0
    int *pnumber=NULL;  // A pointer that can point to type int
    number=10;
    pnumber=&number;    // Store the address of number in pnumber
    *pnumber+=25;

    -increments the value of the number variable by 25
    -* indicates you are accessing the contents to which the variable called pnumber is pointing to

    -if a pointer points to a variable x
        -that pointer has been defined to be a pointer to the same data type as is x
        -use of *pointer in n expression is identical to the use of x in the same expression

    -a variable defnies as a "pointer to int" can store the address of any variabe of type int

    int value=999;

    pnumber=&value;
    *pnumber+=25;

    -the satement will operate with the new variable, value
        -the new contents of value will be 1024
    
    -a pointer can contain the address of any variable of the appropiate type
        -you can use one pointer variable to change the values of many different variables
        -as long as they are of a type compatible with the pointer type
*/

#include <stdio.h>

int main(void)
{
    long num1=0L;
    long num2=0L;
    long *pnum=NULL;

    pnum=&num1; // Get address of num1
    *pnum=2L;   // Set num1 to 2
    ++num2; // Increment num2
    num2+=*pnum;    // Add num1 to num2

    pnum=&num2; // Get address of num2
    ++*pnum;    // Increment num2 indirectly

    printf("num1=%ld num2=%ld *pnum=%ld *pnum+num2=%ld\n",num1,num2,*pnum,*pnum+num2);

    return 0;
}

/*
    when receiving Input

    -when we have used scanf() to input values, we have used the & operator to obtain the address of a variable
        -on the viable that is to store the input (second argument)

    -when you have a pointer that already contains an address, you can use the pointer name as an argument for scanf()

    int value=0;
    int *pvalue=&value; // Set pointer to refer to value

    printf("Input an integer:");
    scanf(" %d",pvalue);    // Read into value via the pointer

    printf("You entered %d.\n",value);  // Output the value entered
*/

/*
    Testing for NULL

    -there is one rule you should burn into your memory
        -do not dereference an unitialized poitner

    int * pt; // an unitialized pointer
    *pt=5; // a terrible error

    -second line means store te value 5 in the location to which pt points
        -pt has a random value,there is no knowing where the 5 will be placed
    
    -it might go somewhere harmless, it might overwrite data or code, or might cause the program to crash

    -creating a pointer only allocates memory to store the pointer itself
        -it does not allocate memory to store data
        -before you use a pointer, it should be assigned a memory location that has already been allocated
            -assign the address of an existing variable to the pointer
            -or you can use the malloc() function to allocate memory first   

    -we already know that when declaring a pointer that does not point to anything, we should initialize it to NULL

    int *pvalue=NULL;

    -NULL is a special symbol in C that represents the pointer equivalent to 0 with ordinary numbers
        -the below also sets a pointer to null using 0

    int *pvalue=0;

    -because NULL is the equivalent of zero, if you want to test whether pvalue is NULL, you can do this:
        -or you can do it explicitly by using == NULL
     
    if(!pvalue)......

    -you want to check for NULL before you dereference a pointer
        -often when pointers are passed to functions
*/