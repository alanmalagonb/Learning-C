/*
    -the volatile type qualifier tells the compiler explicitly that the specified variable will change its value

    -it is provided so that a program can tell the compiler to suppress various kinds of optimizations
        -prevents the compiler from optimizing away seemingly redundant assignments to a variable
        -prevents the compiler from repeated examination of a variable without its value seemingly changing
    
    -essentially, prevents the compiler from "caching" variables

    -the reason for having this type qualifier is mainly because of the problems that are encountered in real-time or embedded systems programming  
        -programs that have a lot of threading
        -programs where resources are scarce
*/

/*
    Use cases

    -a variable should be declared volatile whenever its value could change unexpectedly

    -the optimizer must be careful to reload the variable every time it is used instead of holding a copy in a register

    -only three types of variables should use volatile
        -memory-mapped peripheral registers
        -global variables (non stack variables) modified by an interrupt service routine
        -global variables accessed by multiple tasks within a multi-threaded application
*/

/*
    Syntax
    
    -the syntax is the same as for const

    volatile int loc1; // loc1 is a volatile location
    volatile int * ploc; // ploc points to a volatile location

    -loc1 is a volatile value

    -ploc points to a volatile value
*/

/*
    Example

    val1 = x;

    //some code not using x

    val2 = x;

    -a smart (optimizing) compiler might note that you use twice without changing its value
        -would temporarily store the x value in a register
        -when x is needed for val2, it can save time by reading the value from a register instead of from the original memory location
    
    -this optimization is not desired if x is changed between the two statements by some other agency
        -you would use the volatile keyword to ensure that the compiler does not optimize and instead has a stored value for each variable

    -if the volatile keyword is not used in the declaration, the compiler can assume that a value has not changed between uses, and it can then attempt to optime the code
*/

/*
    Another Example (An I/O port)

    -suppose you have an output port that is pointed to by a variable in your program

    -if you want to write two characters to the port
        -an O followed by an N

    *outPort = 'O';
    *outPort = 'N';

    -a smart compiler might notice two successive assignments to the same location
        -because outPort is not being modified in between , the compiler would remove the first assignment from the program
    
    -to prevent this from happening, you declare outPort to be a volatile pointer

    volatile char *outPort;
*/

/*
    using volatile with const

    -a value can be both const and volatile

    -a hardware clock setting normally should not be changed by the program
        -make it const

    -however, it is changed by an agency other than th eprogram
        -make it volatile

    -use both qualifiers in the declaration (order does not matter)

    volatile const int loc;
    const volatile int * ploc;
*/