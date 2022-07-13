/*
    Accessing Pointers values

    -you use the indirection operator, *, to access the value of the variable pointed to by a pointer
        -also referred to as the dereference operator because you use it to "dereference" a pointer

    int number=15;
    int *pointer=&number;
    int result=0;

    -the pointer variable contains the address of the variable number
        -you can use this in an expression to calculate a new value for result

    result = *pointer + 5:

    -the expression *pointer will evaluate to the value stored at the address contained in the pointer
        -the value stored in number , 15 , so result will be set to 15+5, which is 20

    -the indirection operator,*, is also the symbol for multiplication, and it is used to specify pointer types
        -depending on where the asterisk appears, the compiler will understand whether it should interpret it as an indirection operator, as a multiplication sign, or as part of a type specification
        -context determines what it means in any instance
*/

#include <stdio.h>

void displayingValues();

int main(void)
{
    int count = 10,x;
    int *int_pointer;

    int_pointer=&count;
    x=*int_pointer;

    printf("count = %i, x=%i\n",count,x);

    displayingValues();

    return 0;
}

/*
    Displaying a pointers value

    -to output the address of a variable, you use the output format specifier %p
        -outputs a pointer value as a memory address in hexadecimal form

    int number = 0; // A variable of type int initialized to 0
    int *pnumber = NULL; // A pointer that can point to type int

    number = 10;
    pnumber = &number;
    printf("pnumbers's value: %p\n",pnumber); // Output the value (an address)

    -pointers occupy 8 bytes and the addresses have 16 hexadecimal digits
        -if a machine has a 64-bit operating system and my compiler supports 64-bit addresses
        -some compilers only support 32-bit addressing,in which case addresses will be 32-bit addresses

    printf("number's address: %p\n",&number);   // Output the address
    pritnf("pnumber's address: %p\n",(void*)&pnumber);  //Output the address

    -remember, a pointer itself has an address, just like any other variable
        -you use %p as the conversion specifier to display an address
        -you use the &(address of) operator to reference the address that the pnumber variable occupies
        -the cast to void* is to prevent a possible warning from the compiler
            -the %p specification expects the value to be some kind of pointer type, but the type of &pnumber is "pointer to pointer to int"
*/

/*
    Displaying the number of bytes a pointers is using

    -you use the sizeof operator to obtain the nubmer of bytes a pointer occupies
        -on my machine this shows that a pointer occupies 8 bytes
        -a memory address on my machine is 64 bits

    -you may get a compiler warning when using sizeof this way
        -size_t is an implementation-defined integer type
        -to prevent the warning, yo could cast the argument to type int like this:

    printf("pnumber's size: %d bytes\n",(int)sizeof(pnumber)); // Output the size    
*/

void displayingValues(){
    int number=0;   // A variable of type int initialized to 0
    int *pnumber=NULL;  // A pointer that can point to type int

    number=10;
    printf("number's address: %p\n",&number);   // Output the address
    printf("number's value: %d\n",number);  // Output the value

    pnumber=&number;    // Store the address of number in pnumber

    printf("pnumber's address: %p\n",(void*)&pnumber); // Output the address
    printf("pnumber's size: %zd bytes\n",sizeof(pnumber));  // Output the size
    printf("pnumber's value: %p\n",pnumber);    // Output the value (an address)
    printf("value pointed to: %d\n",*pnumber);  // Value at the address
}