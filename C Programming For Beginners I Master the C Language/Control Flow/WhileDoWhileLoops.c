/*
    while and do-while loops

    While loop
    
    -the mechanism for repeating a set of statements allows execution to continue for as long as a specified logical expression evaluates to true

    while this condition is true
        keep on doing this
    
    -the general syntax for the while loop is as follow (one statement in body):

    while(expression)
        statement1;

    -the condition for continuation of the while loop is tested at the start (top of the loop)
        -pre-test loop
    
    -if expression starts out false, none of the loop statements will be executed
    
    -if the loop condition starts out as true, the loop body must contain a mechanism for changing this if the loop is to end


*/

// Program to introduce the while statement

#include <stdio.h>

int main(void)
{
    //Counter Controlled While Loop

    int count = 1;

    while(count <= 5){
        printf("%i\n",count);
        ++count;
    }

    //Logic controlled while loop

    int num = 0;
    scanf("%d", &num);

    while (num != -1)
    {
        /* loop actions */
        scanf("%d",&num);
    }
    
    return 0;
}

/*
    do-while loop

    -In the while loop, the body is executed while the condition is true

    -the do-while loop is a loop where the body is executed for the first time unconditionally
        -always guaranteed to execute at least once
        -condition is at the bottom (post-test loop)

    -After initial execution, the body is only executed while the condition is true

    do
        statement
    while (expression);

    do
        scanf("%d",&number);
    while (number!=20);

    Or counter controlled

    int number = 4;
    do
    {
        printf("\nNumber = %d",number);
        number++;
    }
    while(number<4);
*/


/*
    Which loop to use?

    -First, decide whether you need an pre or post text loop
        -usually will be a pre test lopp (for or while), a bit better option in most cases
        -it is better to look before you leap (or loop) than after
        -easier to read if the loop test is found at the beginning of the loop
        -in many uses, it is important that the loop be skipped entirely if the test is not initially met

    -So, should you use a for or a while
        -a matter of taste, because what you can do with one, you can do with the other
        -To make a for loop like a while, youn can omit the first and third expression

    for(;test;)

    is the same as

    while(test)

    -To make a while like a for, preface it with an initialization and include update statements

    initialize;
    while(test)
    {
        body;
        update;
    }

    is the same as

    for(initialize;test;update)
        body;

    -a for loop is appropiate when the loop involves initializing and updating a variable
    -a while loop is better when the conditions are otherwise
    -I usually use the while loop for logic controlled loops and the for loop for counter controlled loops

    while(scanf("%l",&num)==1)

    for(count=1;count<=100;count++)
*/