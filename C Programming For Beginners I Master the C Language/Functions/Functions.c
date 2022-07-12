/*
    -A function is a self-contained unit of program code designed to accomplish a particular task
    -Syntax rules define the structure of a function and how it can be used
    -A function in C is the same as subroutine or procedures in other programming languages

    -Some functions cause an action to take place
        -printf() causes data to be printed on your screen
    
    -Some functions find a value for a program to use
        -strlen() tells a program how long a certain string is
*/

/*
    Advantages
    -allow for the divide and conquer strategy
        -it is vey difficult to write an entire program as a single large main function
            -is difficult to test, debug and maintain
    
    -with divide and conquer, tasks can be divided into several independent subtasks
        -reduces the overall complexity
        -separate functions are written for each subtask
        -we can further divide each subtask into smaller subtasks, further reducing the complexity

    -reduce duplication of code
        -saves you time when writing,testing, and debugging code
        -reduces the size of the source code
    
    -If you have to do a certain task several times in a program, you only need to write an appropiate function once
        -program can then use that function wherever needed
        -you can also use the same function in different programs (printf)

    -helps with readability
        -program is better organized
        -easier to read and easier to change or fix

    -the divide and conquer approach also allows the parts of a program to be developed, tested and debugged independently
        -reduces the overall development time

    -the functions debeloped for one program can be used in another program
        -software reuse
    
    -many programmers like to think of a function as a "black box"
        -information that goes in (its input)
        -the value or action it produces (its output)

    -using this "black box" thinking helps you concentrate on the program's overall design rather than the details
        -what the function should do and how it relates to the program as a whole before worrying about writing the code  
*/

#define SIZE 50

int main(void)
{
    float list[SIZE];

    readlist(list,SIZE);
    sort(list,SIZE);
    average(list,SIZE);
    return 0;
}

/*
    Implementing functions

    -remember, just calling functions does not work unless we implement the function itself
        -user defined functions
        -we would have to write the code for the three functions readlist(),sort(),and average() in our previous examples

    -always use descriptive function names to make it clear what the program does and how it is organized
        -if you can make the functions general enough, you can reuse them in other programs
    
    in the upcoming lectures we will understand
        -how to define them
        -how to invoke them
        -how to pass and return data from them
*/


/*
    main() function
    
    -the main() is a specially recognized name in the C system
        -indicates where the program is to begin execution
        -all C programs must always have a main()
        -can pass data to it (command line arguments)
        -returning data optional (error code)
*/