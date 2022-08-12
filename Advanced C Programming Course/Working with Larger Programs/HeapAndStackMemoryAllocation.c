/*
    Memory

    -there are three forms of memory that you can use in your program
        -static
        -stack
        -heap
    
    -in this lecture, we will discuss three type with a focus on the heap and stack

    -each type of memory determines where and how it is stored

    -it is very important to understand the differences/advantages/disadvantages of how/where your memory is stored
        -it gives you a strategic advantage for creating scalable programs

    -you have to decide when to use memory from the stack vs heap or static memory based on each problem you are trying to solve

    -static memory persists throughout the entire life of the program
        -usually used to store things like global variables, or variables created with the static clause
*/

/*
    Stack

    -the stack is a special region of memory that stores temporary variables
        -used to store variables that are created inside of a function
        -easier to keep track of because the memory is only locally available in the function
    
    -the stack is a "LIFO" (last in, first out) data structure that is managed and optimized by the CPU
        -a linear data structure
        -there is no need to manage the memory yourself
            -variables are allocated and freed automatically

    -the stack grows and shrinks as variables are created and destroyed inside a function
        -every time a function declares a new variable, it is "pushed" onto the stack
        -every time a function exits, all of the variables pushed onto the stack by that function, are freed (deleted)
        -once a stack variable is freed, that region of memory becomes available for other stack variables

    -there is a limit on the size of variables that can be stored on the stack

    -if a program tries to put too much information on the stack, stack overflow will occur
        -happens when all the memory in the stack has been allocated, and further allocations begin overflowing into other sections of memory
            -happens when all the memory in the stack has been allocated, and further allocations begin overflowing into other sections of memory
            -stack overflow also occurs in situations where recursion is incorrectly used

    -stack memory is divided into successive frames where each time a function is called, it allocates itself a fresh stack frame

    -a key to understanding the stack is the notion that when a function exits, all of its variables are popped off of the stack
        -thus stack variables are local in nature

    -stack varaiables only exist while the function that created them is running

    -a common bug is attempting to access a variable that was created on the stack inside some function, from a place in your program outside of that function (i.e. after that function has exited)
*/

/*
    Heap

    -Opposite of the stack
    -a hierarchical data structure
    -the heap is a large pool of memory that can be used dynamically
    -memory is not automatically managed
        -more free-floating region of memory

    -the heap is managed by the programmer
        -the memory is accessed through the use of pointer
            -you have to explicitly allocate (malloc) and deallocate (free) the memory
            -failure to free the memory when you are finished with it will result in memory leaks   
                -memory that is still "being used" , and not available to other procesess

    -there are generally no restrictions on the size of the heap (or the variables it creates)
        -other than the physical size of memory in the machine

    -variables created on the heap are accessible anywhere in the program
        -essentially global in scope
    
    -heap memory slightly slower to be read from and written to
*/

/*
    When should use the heap or stack?

    -use the heap
        -when you need to allocate a large block of memory
            -a large array
            -a big struct
        -when you need to keep that variable around a long time
            -a global
        -when you need variables like arrays and structs that can change size dynamically
            -arrays that can grow or shrink as needed

    -use the stack
        -when you are dealing with relatively small variables that only need to persist as long as the function using them is alive
            -easier and faster
*/
