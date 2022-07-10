/*
    -The C programming language provides a general decision-making capability in the form of a if statement

    if (expression)
        program statement

    -translating a statement such as "If it is not raining, then I will go swimming" into the C language is easy

    if(it is not raining)
        I will go swimming

    -The if statement is used to stipulate execution of a program statement/s based upon specified conditions
        -I will go swimming if it is not raining
    
    -The curly brackets are required for compound statements inside the if block

    int score = 95;
    int big = 90;

    //simple statement if, no brackets
    if(score > big)
        printf("Jackport!\n");

    //compound statement if, brackets
    if(score > big)
    {
        score++;
        printf("You win\n");
    }
*/

/*
    If with an else

    -Can extend the if statement with a small addition that gives you a lot more flexibility

    If the rain today is worse than the rain yesterday,
    I will take my umbrella
    Else
    I will take my jacket
    Then I will go to work

    if(expression)
        Statement1;
    else
        Statement2;    
*/

// Program to determine if a number is even or odd

#include <stdio.h>

int main()
{
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i",&number_to_test);

    remainder = number_to_test % 2;

    if(remainder == 0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");
    
    return 0;
}

/*
    else if

    -Can handle additional complex decision makking by adding an if statement to your else clause

    if(expression 1)
        program statement 1
    else
        if(expression 2)
            program statement 2
        else
            program statement 3
    
    -The above extends the if statement from a two-valued logic decision to a three-valued logic decision
        -formatted using the else if construct
    
    if(expression 1)
        program statement 1
    else if(expression 2)
        program statement 2
    else
        program statement 3

    // Program to implement the sign function

    #include <stdio.h>

    int main(void)
    {
        int number, sign;

        printf("Please type in a number: ");
        scanf("%i",&number);

        if(number<0)
            sign=1;
        else if(number==0)
            sign=0;
        else // Must be positive
            sign=1;
        printf("Sign = %i\n",sign);
        return 0;
    }
*/

/*
    nested If-else statement

    -A nested if-else statement means you can use one if or else if statement inside another if or else if statement(s)

    if(boolean_expression 1){
        // Executes when the boolean expresssion 1 is true
        if(boolean_expression 2){
            // Executes when the boolean expression 2 is true
        }
    }

    if(gameIsOver == 0)
        if(playerToMove == YOU)
            printf("Your Move\n");
        else
            printf("My move\n");
    else
        printf("The game is over\n");
*/

/*
    The conditional operator (ternary statement)
    -the conditional operator is a unique operator
        -unlike all other operators in C
        -most operators are either unary or binary operators
        -is a ternary operator (takes three operands)
    -the two symbols that are used to denote this operator are the question mark (?) and the colon (:)
    -the first operand is placed before the ?, the second between ? and the :, and the third after the :
        condition ? expression1 : expression2

    -The conditional operator evaluates to one of two expressions, depending on whether a logical expression evaluates true or false

    x = y > 7 ? 25 : 50;

    -results in x being set to 25 if y is greater than 7, or to 50 otherwise

    -Same as:

    if(y>7)
        x=25;
    else
        x=50;

    -An expression for the maximum or minimum of two variables can be written very simply using the conditional operator
*/