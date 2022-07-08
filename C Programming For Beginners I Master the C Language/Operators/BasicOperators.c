/*
    Basic Operators

    Arithmetic operator
    -A mathematical function that takes two operands and performs a calculation on them
    
    Logical Operator(Boolean operator)
    -An operator that returns a Boolean result that's based on the Boolean result of one or two other expressions

    Assignment operators set variables equal to values
        -assigns the value of the expression at its right to the variable at its left

    Relational operator
        -will compare variables against each other
*/

/*
    Arithmetic Operators
    
    Operator |  Description                                                   | Example
    +           Adds two operands                                               A+B=30
    -           Subtracts second operand from the first                         A-B=-10
    *           Multiplies both operands                                        A*B=200
    /           Divides numerator by de-numerator                               B/A=2
    %           Modulus Operator and remainder of after an integer division     B%A=0
    ++          Increment operator increases the integervalue by one            A++=11
    --          Decrement operator decreases the integer value by one           A--=9
*/

/*
    Logical Operators

    Operator |  Description
    &&          Called Logical AND operator. If both the operands are non-zero, then the condition becaomes true                                                            (A && B) is false
    ||          Called Logical OR operator. If any of the two operands is non-zero, then the conditon becomes true                                                          (A || B) is true
    !           Calles Logical NOT operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false   !(A && B) is true
*/

/*
    Assigment Operators

    Operator |  Description                                                                                                                         |   Example
    =           Simple assignment operator                                                                                                              C=A+B will assign the value of A+B to C            
    +=          Add AND assignment operator. It adds the right operand from the left operand and assigns the result to the left operand                 C+=A is equivalent to C=C+A
    -=          Substract AND assignment operator. It substracts the right operand from the left operand and assigns the result to the left operand     C-=A is equivalent to C=C-A
    *=          Multiple AND assignment operator. It multiplies the right operand with the left operand and assigns the result to the left operand      C*=A is equivalent to C=C*A
    /=          Divide AND assignment operator. It divides the left operand with the right operand and assigns the result to the left operand           C/=A is equivalent to C=C/A
    %=          Modulus AND assignment operator. It takes modulus using two operands and assigns the result to the left operand                         C%=A is equivalent to C=C%A
    <<=         Left shift AND assignment operator                                                                                                      C<<=2 is same as C=C<<2
    >>=         Right shft AND assignment operator                                                                                                      C>>=2 is same as C=C>>2
    &=          Bitwise AND assignment operator                                                                                                         C&=2 is same as C=C&2
    ^=          Bitwise exclusive OR and assignment operator                                                                                            C^=2 is same as C=C^2
    |=          Bitwise inclusive OR and assignment operator                                                                                            C|=2 is same as C=C|2
*/

/*
    Relational Operators

    Operator |  Description
    ==          Checks if the values of two operands are equal or not. If yes, then the condition becomes true
    !=          Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true
    >           Checks if the value of left operand is greather than the value of right operand. If yes, then the condition becomes true
    <           Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true
    >=          Checks if the value of left operand is greather than or equal to the value of right operand. If yes, then the condition becomes true
    <=          Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true
*/

#include <stdio.h>

int main()
{
    int a = 33;
    int b = 15;
    int result = 0;
    
    result = a + b;

    printf("result is %d\n", result);
    printf("result++ is %d\n", result++);

    _Bool result2;
    result2 = a && b;

    printf("result2 is %d\n",result2);
    printf("result2 is %d\n",!result2);
    
    return 0;
}