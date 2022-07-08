/*
    -C offers bitwise logical operators and shift operators
        -look something like the logical operators you saw earlier but are quite different
        -operate on the bits in integer values

    -Not used in the common program

    -One major use of the bitwise AND, &, and the bitware OR, |, is in operations to test and set individial bits in an integer variable
        -can use individual bts to store data that involve one of two choices
    
    -You could use a single integer variable to store several characteristics of a person.
        -store wheter the pers is male or female with one bit
        -use three other bits to specify whether the person can speak French,German, or Italian
        -another bit to record whether the person's salary is $50,000 or more
        -in just four bits you have a substantial set of data recorded
*/

/*
    Binary Numbers

    -a binary number is a number that includes only ones and zeroes
    -the number could be of any length
    -the following are all examples of binary numbers
    0 10101
    1 0101010
    10 1011110101
    01 0110101110
    111000 0001111

    -every binary number has a corresponding decimal value (and vice versa)
    -each position for a binary number has a value
    -for each digit, multiply the digit by its position value
    -add up all of the products to get the final result
    -in general, the "position values" in a binary number are the powers of two
*/

/*
    Bitwise Operators
    
    Operator |  Description                                                                                                               | Example
    &           Binary AND Operator copies a bit to the result if it exists in both operands.                                               (A & B) = 12, i.e., 0000 1100
    |           Binary OR Operator copies a bit if it exists in either operand.                                                             (A | B) = 61, i.e., 0011 1101
    ^           Binary XOR Operator copies the bit if it is set in one operand but not both.                                                (A ^ B) = 49, i.e., 0011 0001
    ~           Binary One's Complement Operator is unary and has the effect of 'flipping' bits.	                                        (~A ) = ~(60), i.e,. 1100 0011
    <<          Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.     A << 2 = 240 i.e., 1111 0000
    >>          Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.   A >> 2 = 15 i.e., 0000 1111

*/

#include <stdio.h>

int main()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    result = a & b;
    // 0000 1100
    printf("result is %d\n",result);

    result = a | b;
    // 0011 1101
    printf("result is %d\n",result);

    result = a ^ b;
    printf("result is %d\n",result);
    // 0011 0001

    result = ~a;
    printf("result is %d\n",result);
    // 1100 0011

    result = a << 1;
    printf("result is %d\n",result);
    // 0001 1000 0110

}
