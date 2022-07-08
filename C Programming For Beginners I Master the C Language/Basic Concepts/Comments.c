// Comments

/*
 *  Are used in a program to document a program and to enhance its readability.
 *  There to remind you, or someone else reading your code, what the program does or what a particular line of code is doing.
 *  Are ignored by the compiler.
 */

/************************************
 * This is a very important comment 
 * so please read this.
 * **********************************/

/* This program adds two integer values
   and displays the results    */

#include <stdio.h>

int main(void)
{
    //Declare variables
    int value1,value2,sum;

    //Assign values and calculate their sum
    value1=50;
    value2=25;
    sum=value1+value2;

    //Display the result
    printf("The sum of %i and %i is %i\n",value1,value2,sum);
    
    return 0;
}