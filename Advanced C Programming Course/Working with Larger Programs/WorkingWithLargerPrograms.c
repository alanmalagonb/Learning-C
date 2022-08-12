/*
    -most programs in the real world that you will have to develop will not be as small or as simple

    -it is imperative to learn the proper techniques for dealing with larger programs
        -you need to divide the problem into multiple sub problems and then try to tackle it one by one
    
    -C provides all the features necessary for the efficient development of large programs
*/

/*
    Dividing your program into multiple files

    -the most common beginner mistake is to jump in directly and try to write all the necessary code into a single file and later try to debug or extend later
        -this approach is doomed to fial and would usually require re-writing from scratch

    -all the functions that the program used were included in one file
        -except for the system functions, such as printf() and scanf()
        -standard header files such as <stdio.h> and <stdbool.> were also included for definitions and function declarations

    -when you start dealing with larger programs, they must be organized around multiple files
        -programs that contain more than 100 statements or sos
*/

/*
    Advantages

    -the advantages of this approach allows you to achieve Abstraction and promotes the re-usability of code

    -teams of programmers can work on programs  
        -each programmer works on a different file

    -files can contain all functions from a related group
        -e.g. all matrix operations
    
    -well implemented can be re-used in other programs, reducing development time

    -when changes are made to a file, only that file need be re-compiled to rebuild the program

    -if you check any Open-Source project (Github) you can see how the large program is "decentralized" into many numbers of sub-modules
        -each individual module contributes to a specific critical function of the program
*/

/*
    -programmers usually start designing a program by dividing the problem into easily managed sections

    -each of these sections might be implemented as one or more functions

    -all functions from each section will usually live in a single file

    -the file contains the definition of each functions
        -should create a header file for each of the C files
            -will have the same name as the C file
*/