/*
    Utility Functions

    -to use these routines, include the header file <stdlib.h>

    -int abs(n)
        -returns the absolute value of its int argument n

    -void exit(n)
        -terminates program execution, closing any open files and returning the exit status specified by its int argument n
        -EXIT_SUCCESS and EXIT_FAILURE, defined in <stdlib.h>
        -other related routines in the library that you might want to refer to are abort and atexit

    -char *getenv(s)
        -returns a pointer to the value of the environment variable pointed to by s, or a null pointer if the variable doesn't exist
        -used to get environment variables

    -void qsort(arr,n,size,comp_fn)
        -sorts the data array pointed to by the void pointer arr
        -there are n elements in the array, each size bytes in length. n and size are of type size_t
        -the fourth argument is of type "pointer to function that returns int and that takes two void pointers as arguments"
        -qsort calls this function whenever it needs to compare two elements in the array, passing it pointers to the elements to compare

    -int rand(void)
        -returns a random number in the range [0, RAND_MAX], where RAND_MAX is defined in <stdlib.h> and has a minimum value of 32767
    
    -void srand(seed)
        -seeds the random number generator to the unsigned int value seed
    
    -int system(s)
        -gives the command contained in the character array pointed to by s to the system for execution, returning a system-defined value
        -system("mkdir /usr/tmp/data");
*/

/*
    Assert Library
    
    -the assert library, suppoerted by the assert.h header file, is a small one designed to help with debugging programs
    
    -it consists of a macro name assert()
        -it takes as its argument an integer expression
        -If the expression evaluates as false(nonzero), the assert() macro writes an error message to the standard error stream(stderr) and calls the abort() function, which terminates the program
    
    z=x*x-y*y; // should be +
    assert(z>=0); //assets that z is greater than or equal to 0
*

/*
    Other useful header files

    -time.h
        -defines macros and functions supporting operations with dates and times

    -errno.h
        -defines macros for the reporting of errors

    -locale.h
        -defines functions and macros to assist with formatting data such as monetary units for different countries

    -signal.h
        -defines facilities for dealing with conditions that arise during program execution, including error conditions

    -stdarg.h
        -defines facilities that enable a variable number of arguments to be passed to a function
*/