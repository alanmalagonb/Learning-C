/*
    -an array is a collection of objects of the same type that you can refer to using a single name

    -a pointer is a variable that has as its value a memory address that can reference another variable or constant of a given type
        -you can use a pointer to hold the address of different variables at different times (must be same type)

    -arrays and pointers seem quite different, but, they are very closely related and can sometimes be used interchangeably

    -one of the most common uses of pointers in C is as pointers to arrays

    -the main reasons for using pointers to arrays are ones of notational convenience and of program efficiency
*/

/*
    Arrays and Pointers

    -if you have an array of 100 integers

    int values[100];

    -you define a pointer called valuesPtr, which can be used to access the integers contained in this array

    int * valuesPtr;

    -when you define a pointer that is used to point to the elements of an array, you do not designate the pointer as type "pointer to array"
        -you designate the pointer as pointing to the type of element that is contained in the array

    to set valuesPtr to point to the first element in the values array, you write

    valuesPtr=values;

    -the address operator is not used
        -the C compiler treats the appearance of an array name without a subscript as a pointer to the array
        -specifying values without a subscript has the effect of producing a pointer to the first element of values

    -an equivalent way of producing a pointer to the start of values is to apply the address operator to the first element of the array

    valuesPtr=&values[0];

    So, you can use the above example or the one on the previous slide

    valuesPtr=values;

    -either one is fine and matter of programmer preference
*/

/*
    Summary

    -the two expressions ar[i] and *(ar+i) are equivalent in meaning
        -both work if ar is the name of an array, and both work if ar is a pointer variable
        -using an expression such as ar++ only works if ar is a pointer variable
*/