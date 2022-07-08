/*
    -There are times when a program is developed that requires the user to enter a small amount of information at the terminal
    -This information might consist of a number indicating the triangular number that you want to have calculated or a word that you want to have looked up in a dictionary

    -Two ways of handling this
        -Requesting the data from the user
        -supply the information to the program at the time the program is executed (command-line arguments)
    
    -We know that the main() function is a special function in C
        -Entry point of the program
    
    -When main() is called by the runtime system, two arguments are actually passed to the function
        -the first argument (argc for argument count) is an integer value that specifies the number of arguments typed on the command line
        -the second argument (argv for argument vector) is an array of character pointers (strings)

    -The first entry in this array is a pointer to the name of the program that is executing
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("\nNumber of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n",argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);

    return 0;
}
