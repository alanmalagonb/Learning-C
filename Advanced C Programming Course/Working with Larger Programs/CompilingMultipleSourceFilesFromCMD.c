/*
    -Suppose you have conceptally divided your program into three modules
        -mod1.c , mod2.c, and the main() routine into the file main.c

    -to tell the system that thses three modules actually belong to the same program
        -you include the name of all three files when you enter the command to compile the program
    
    gcc mod1.c mod2.c main.c -o dbtest

    -the above has the effect of separately compiling the code contained in mod1.c, mod2.c and main.c

    -errors discovered in mod1.c, mod2.c, and main.c are separately identified by the compiler

    mod2.c:10:mod2.c: In function 'foo':

    -the above indicates that the compiler identified an error on line 10 of file mod2.c
        -in the function foo

    -if your compiler automaticaally deletes the intermediate .o files
        -you can still take advantage of performing incremental compilations
    
    -you can compile each module separately and using the -c command-line option
        -option tells the compiler not to link your file
        -does not produce an executable
        -retains the intermediate object file that it creates

    gcc -c mod2.c

    -compiles the file mod2.c, placing the resulting executable in the file mod2.o
*/