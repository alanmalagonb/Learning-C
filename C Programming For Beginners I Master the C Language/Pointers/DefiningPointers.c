/*
    Declaring pointers

    -pointers are not declared like normal variables

    pointer ptr; // not the way to declare a pointer /

    -it is not enoguh to say that a variable is a pointer
        -you also have to specify the kind of variable to which the pointer points
        -different variable types take up different amounts of storage
        -some pointer operations require knowledge of that storage size

    -you declare a pointer to a varible of type int with:

    int *pnumber;

    -the type of the variable with the name pnumber is int*
        -can store the address of any variable of type int

    int * pi;   // pi is a pointer to an integer variable
    char * pc;  // pc is a pointer to a character variable
    float * pf, * pg;   // pf, pg are pointers to float variables

    -the space between the * and the pointer name is optional  
        -programmers use the space in a declaration and omit it when dereferencing a variable

    -the value of a pointer is an address, and it is represented internally as an unsigned integer on most systems
        -however, you shouldn't think of a pointer as an integer type
        -things you can do with integers that you can not do with pointers, and vice versa
        -you can multiply one integer by another, but you can not multiply one pointer by another

    -a pointer really is a new type, not an integer type
        -%p represents the format specifier for pointers

    -the previous declarations creates the variable but does not initialize it
        -dangerous when not initialized
        -you should always initialize a pointer when you declare it
*/

/*
    NULL Pointers

    -you can initialize a pointer so that it does not point to anything:

    int *pnumber = NULL;

    -NULL is a constant that is defined in the standard library
        -is the equivalent of zero for a pointer

    -NULL is a value that is guaranteed not to point to any location in memoery
        -means that it implicitly prevents the accidental overwriting of memoery by using a pointer that does not point to anything specific

    -add an #include directive for stddef.h to your source file
*/

/*
    Address of operator

    -if you want to initialize your variable with the address of a varialbe you have already declared
        -use the address of operator, &

    int number = 99;
    int *pnumber = &number;

    -the initial value of pnumber is the address of the variable number
        -the declaration of number must precede the declaration of the pointer that sotres its address
        -compiler must have already allocated space and thus an addres for number to use it to initialize pnumber
*/

/*
    Be careful
    
    -there is nothing special about the declaration of a pointer
        -can declare regular variables and pointers in the same statemetn

    double value, *pVal, fnum;

    -only the second variable, pVal, is a pointer

    int *p,q;

    -the above declares a pointer,p of type int*, and a variable, q, that is of type int
        -a commong mistake to think that both p and q are pointers

    -also, it its a good idea to use names beginning with p as pointer names
*/ 