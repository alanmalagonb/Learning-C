/*
    Operator precedence
    -Determines the grouping of terms in an expression and decides how an expression is evaluated
        -dictates the order of evaluation when two operators share an operand
        -certain operators have higher precedence than others
        -for example, the multiplication operator has a higher precedence than the addition operator
    x=7+3*2;

    -Can result in 13 or 20 depending on the order of each operands evaluation

    -the order of executing the various operations can make a difference, so C needs ambiguous rules for choosing what to do first
    -In C, x is assigned 13, not 20 because operator * has higher precedence than +
        -first gets multiplied with 3*2 and then adds into 7

    -Each operator is assigned a precedence level
        -multiplication and division have a higher precedence than addition and substractions, so they are performed first
    
    -Whatever is enclosed in parentheses is executed first, should just always use () to group expression
*/

/*
    Associativity
    -When two operators have the same precedence, associativity rules are applied

    -If they share an operand, they are executed according to the order in which they occur in the statement
        -For most operators, the order is from left to right

    1 == 2 != 3

    -operators == and != have same precedence
        -associativity of both == and != is left to right
        -the expression on the left is executed first and moves towards the right
    -the expression above is equivalent to
        ((1 == 2) != 3)
    -(1==2) executes first resulting into 0 (false), then (0!=3) executes into 1 (true)

    Table (highest to lowest)

    Category      | Operator                      | Associativity
    Postfix         () [] -> , ++ --                Left to right
    Unary           + - ! ~ ++ -- (type)* & sizeof  Right to left
    Multiplicative  * / %                           Left to right
    Additive        + -                             Left to right
    Shift           << >>                           Left to right
    Relational      < <= > >=                       Left to right
    Equality        == !=                           Left to right

    Bitwise AND     &                               Left to right
    Bitwise XOR     ^                               Left to right
    Bitwise OR      |                               Left to right
    Logical AND     &&                              Left to right
    Logical OR      ||                              Left to right
    Conditional     ?:                              Right to left
    Assignment      = += -= *= /= %= >>= <<= &= ^= |= Right to left
    Comma           ,                               Left to right
*/