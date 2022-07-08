/*
    Operators
    -Are functions that use a symbolic name
        -perform mathematical or logical functions

    Logical Operator(Boolean operator)
    -An operator that returns a Boolean result that's based on the Boolean result of one or two other expressions

    Arithmetic operator
    -A mathematical function that takes two operands and performs a calculation on them
    
    Other operators include assignment, relational (<,>,!=),bitwise(<<,>>,~)
*/

/*
    Expressions and Statements
    
    -Statements form the basic program steps of C, and most statements are constructed from expression
    -An expression consists of a combination of operator and operands
        -operands are what and operator operates on
        -operands can be constants, variables, or combinations of the two
        -every expression has a value
    
    -Statements are the building blocks of a program(declaration)
        -A program is a series of statements with special syntax ending wth a semicolon (simple statements)
        -a complete instruction to the computer
    
    -Declaration statement: int Jason;
    -Assignment Statement: Jason=5;
    -Function call statement: printf("Jason");
    -Structre Statement: while(Jason<20) Jason=Jason+1;
    -Return Statement: return 0;

    -C considers any expression to be a statement if you append a semicolon (expression statements)
        -So, 8; and 3-4; are perfectly valid in C
*/

/*
    Compound Statements

    -two or more statements grouped together by enclosing them in braces (block)

    int index = 0;
    while (index<10)
    {
        printf("hello");
        index=index+1;
    }
*/