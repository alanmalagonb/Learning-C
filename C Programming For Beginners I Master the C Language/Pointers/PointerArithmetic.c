/*
    pointher arithmetic

    -the real power of using pointers to arrays come into play when you want to sequence through the elements of an array

    *valuesPtr // can be used to access the first integer of the values array, that is, values[0]

    -to reference values[3] through the valuesPtr variable, you candd add 3 to valuesPtr and then apply the indirection operator

    *(valuesPtr+3)

    -the expression, *(valuesPtr+i) can be used to access the value contained in values[i]
        -to set values[10] to 27, you could do the following

    values[10]=27;

    -or, using valuesPtr, you could

    *(valuesPtr+10)=27

    -to set valuesPtr to point to the second element of the values array, you can apply the address operator to values[1] and assign the result to valuesPtr

    valuesPtr = &values[1];

    -If valuesPtr points to values[0], you can set it to point to values[1] by simple adding 1 to the value of valuesPtr

    valuesPtr += 1;

    -this is a perfectly valid expression in C and can be used for pointers to any data type

    -the increment and decrement operators ++ and -- are particularly useful when dealing with pointers

    -using the increment operator on a pointer has the same effect as adding one to the pointer
    -using the decrement operator has the same effect as substracting one from the pointer

    ++valuesPtr;

    -sets valuesPtr pointing to the next integer in the values array (values[1])

    --textPtr;
    
    -sets valuesPtr pointing to the previous integer in the values arrays, assuming that valuesPtr was not pointing to the beginning of the values array
*/

#include <stdio.h>

int arraySum (int array[], const int n)
{
    int sum = 0, *ptr;
    int * const arrayEnd = array+n;

    for(ptr=array; ptr<arrayEnd; ++ptr)
        sum+=*ptr;
    return sum;
}

void main(void)
{
    int arraySum(int array[], const int n);
    void pointerNotation();

    int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};

    printf("The sum is %i\n",arraySum(values,10));

    pointerNotation();
}

/*
    -to pass an array to a function, you simple specify the name of the array
    -to produce a pointer to an array, you need only specify the name of the array

    -this implies that in the call to the arraySum() function, what was passed to the function was actually a pointer to the array values
        -explains why you are able to change the elements of an array from within a function
    
    -so, you might wonder why the formal parameter inside the function is not declared to be a pointer

    int arraySum(int *array, const int n)

    -the above is perfectly valid
        -pointers and arrays are intimately related in C
        -this is why you can declare array to be of type "array of ints" inside the arraySum function or to be of type "pointer to int".

    -if you are going to be using index numbers to reference the elements of an array that is passed to a function, declare the corresponding formal parameter to be an array
        -more correctly reflects the use of the array by the function

    -if you are using the argument as a pointer to the array, declare it to be of type pointer.
*/

int arraySum2 (int *array, const int n)
{
    int sum = 0;
    int * const arrayEnd = array+n;

    for( ; array<arrayEnd; ++array)
        sum+=*array;
    return sum;
}

void pointerNotation()
{
    int arraySum2 (int *array, const int n);
    int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};

    printf("The sum is %i\n",arraySum2(values,10));
}

/*
    Summary

    int urn[3];

    int * ptr1, * ptr2;

    Valid               Invalid
    ptr1++;             urn++;
    ptr2 = ptr1 + 2;    ptr2 = ptr2 + ptr1;
    ptr2 = urn + 1;     ptr2 = urn * ptr1;

    -functions that process arrays actually use pointers as arguments

    -you have a choice between array notation and pointer notation for writing array-processing functions

    -using array notation makes it more obvious that the function is working with arrays
        -array notation has a more familiar look to programmers versed in FORTRAN,Pascal,Modula-2,or BASIC

    -other programmers might be more accustomed to working with pointers and might find the pointer notation more natural
        -closer to machine language and, with some compilers, leads to more efficient code
*/