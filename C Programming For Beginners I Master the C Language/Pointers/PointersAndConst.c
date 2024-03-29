/*
    -when we use the const modifier on a variable or an array it tells the compiler that the contents of the variable/array will not be changes by the program

    -with pointers, we have to consider two things when using the const modifier
        -wheter the pointer will be changed
        -whether the value that the pointer points to will be changed
    
    -you can use the const keyword when you declare a pointer to indicate that the value pointed to must not be changed

    long value = 9999L;
    const long *pvalue=&value;  // defines a pointer to a constant

    -you have declared the value pointed to by pvalue to be const
        -the compiler will check for any statements that attempt to modify the value pointed to by pvalue and flag such statements as an error

    -the following statement will now result in an error message from the compiler

    *pvalue=8888L;  // Error - attempt to change const location
*/

/*
    pointers to constants

    -you can still modify value (you have only applied const to the pinter)

    value=7777L;

    -the value pointed to has changed, but you did not use the pointer to make the change

    -the pointer itself is not constant, so you can still change what it points to:

    long number=8888L;
    pvalue=&number; // OK - changing the address in pvalue

    -will change the address stored in pvalue to point to number
        -still cannot   use the pointer to change the value that is stored
        -you can change the address stored in the pointer as much as you like
        -using the pointer to change the value pointed to is not allowed, even after you have changed the address stored in the pointer.

    -you might also want to ensure that the address stored in a pointer cannot be changed

    -you can do this by using the const keyword in the declaration of the pointer

    int count=43;
    int *const pcount=&count;   // Defines a constant pointer

    -the above ensures that a pointer always points to the same thing
        -indicates that the address stored must not be changes
        -compiler will check that you do not inadvertently attempt to change what the pointer points to elsewhere in your code

    int item=34;
    pcount=&item;   // Error - attempt to change a constant pointer

    -it is all about where you place the const keyword, either before the type or after the type
        -const int * ...    // value can not be changed
        -int * const ...    // pointer address cannot change

    -you can still change the value that pcount points to using pcount

    *pcount=345;    // OK - changes the value of count

    -references the value stored in count through the pointer and changes its value to 345

    -you can create a constant pointer that points to a value that is also constant:

    int item=25;
    const int *const pitem = &item;

    -the pitem is a constant pointer to a constant so everything is fixed
        -cannot change the address stored in pitem
        -cannot use pitem to modify what it points to

    -you can still change the value of item directly
        -if you wanted to make everything not change, you could specify item as const as well
*/