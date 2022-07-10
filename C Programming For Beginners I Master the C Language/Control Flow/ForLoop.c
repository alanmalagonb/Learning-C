/*
    for loop
    -Used to execute a block of statements a given number of times

    -The for loop operation is controlled by what appears between the parentheses that follow the keyword for
        -the three control expression that are separated by semicolons control the operation of the loop
*/

/*
    For syntax
    -The general pattern for the for loop is:

    for(starting_condition; continuation_condition; action_per_iteration)
        loop_statement;
    
    -The statement to be repeated is represented by loop_statement
        -could equally well be a block of several statements enclosed between braces

    -The starting_condition usually (but no always) sets an initial value to a loop control braces
        -the loop control variable is typically a counter of some kind that tracks how often the loop has been repeated
        -can also declare and initialize several variables of the same type here with the declarations separated by commas
        -variables will be local to the loop and will not exist once the loop ends
    
    -The continuation_condition is a logical expression evaluating to true or false
        -determines wheter the loop should continue to be executed
        -as long as this condition has the value true, the loop continues
        -typically checks the value of the loop control variable
        -you can put any logical or arithmetic expression here as long as you know what you are doing

    -the continuation_condition is tested at the beginning of the loop rather than at the end
        -means that the loop_statement will not be executed at all if the continuation_condition starts out as false
    
    -The action_per_iteration is executed at the end of each loop iteration
        -usually an increment or decrement of one or more loop control variables
        -can modify several variables here, just need to use commas to separate
*/

#include <stdio.h>

int main()
{
    unsigned int sum = 0; // Stores the sum of the integers
    unsigned int count = 0; // The number of integers to be summed

    // Read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    // Sum integers from 1 to count
    
    for (unsigned int i = 1 ; i <= count; ++i)
        sum += i;
    
    printf("\nTotal of the first %u numbers is %u\n",count,sum);
    
    return 0;
}

/*
    Infinite loop
    -You have no obligation to put any parameters in the for loop statement

    for(;;)
    {
        // statements
    }

    -the condition for continuing the loop is absent, the loop will continue indefinitely
        -sometime useful for monitoring data or listening for connections

    
*/