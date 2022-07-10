/*
    Switch syntax

    switch (expression)
    {
        case value1:
            program statement
        ...
            break;

        case valuen:
            program statement
            program statement
                ...
            break;
        default:
            program statement
                ...
            break;
    }
*/

/*
    Switch statement details

    -The expression enclosed within parentheses is successively compared against the values: value1,value2,...,valuen
        -cases must be simple constants or constant expressions
    
    -If a case is found whose value is equal to the value of expression then the statements that follow the case are executed
        -when more than one statement is included, they do not have to be enclosed within braces
    
    -The break statement signals the end of particular case and causes execution of the switch statement to be terminated
        -include the break statement at the end of every case
        -forgetting to do so for a particular case causes program execution to continue into the next case
    
    -The special optonal case called default is executed if the value of expression does not match any of the case values
        -same as a "fall through" else
*/

#include <stdio.h>

int main(void)
{
    enum Weekday {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    enum Weekday today = Monday;

    switch(today)
    {
        case Sunday:
            printf("Today is Sunday.");
        break;
        case Monday:
            printf("Today is Monday.");
        break;
        case Tuesday:
            printf("Today is Tuesday.");
        break;
        default:
            printf("whatever");
        break;
    }

    float value1,value2;
    char operator;

    printf("Type in your expression.\n");
    scanf("%f %c %f",&value1,&operator,&value2);

    switch (operator)
    {
    case '+':
        printf("%.2f\n",value1+value2);
        break;
    case '-':
        printf("%.2f\n",value1-value2);
        break;
    case '*':
        printf("%.2f\n",value1*value2);
        break;
    case '/':
        if(value2==0)
            printf("Division by zero.\n");
        else
            printf("%.2f\n",value1/value2);
        break;
    default:
        printf("Unknown operator.\n");
        break;
    }

    return 0;
}

/*
    goto statement
    -The goto statement is available in C
        -has two parts-the goto and a label name
        -label is named following the same convention used in naming a variable
    goto part2;

    -For the above to there must be another statement bearing the part2 label

    -you should never need to use the goto statement
        -if you have a background in older versions of FORTRAN or BASIC, you might have developed programming habits that depend on using goto
    
    -Form:

    goto label;
        .
        .
    label: statement

    Example

    top: ch=getchar();
        .
        .
        .
    if(ch!='y')
        goto top;
*/