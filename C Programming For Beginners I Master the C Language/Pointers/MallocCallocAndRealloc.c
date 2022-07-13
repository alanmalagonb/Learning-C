/*
    malloc

    -the simplest standard library function that allocates memory at runtime is called malloc()
        -need to include the stdlib.h header file
        -you specify the number of bytes of memory that you want allocated as the argument
        -returns the address of the first byte of memory that it allocated
        -because you get an address returned, a pointer is the only place to put it

    int *pNumber = (int*)malloc(100);

    -in the above, you have requested 100 bytes of memory and assigned the address of this memory block to pNumber
        -pNumber will point to the first int location at the beginning of the 100 bytes that were allocated
        -can hold 25 int values on my computer, because they require 4 bytes each
        -assumes that type int requires 4 bytes
    
    -it would be better to remove the assumption that ints are 4 bytes

    int *pNumber = (int*)malloc(25*sizeof(int));

    -the argument to malloc() above is clearly indicating that sufficient bytes for accommodating 25 values of type int should be made available

    -also notice the cast (int*), which converts the address returned by the function to the type pointer to int
        -malloc returns a pointer of type pointer to void, so you have to cast

    -you can request any number of bytes

    -if the memory that you requested can not be allocated for any reason
        -malloc() returns a pointer with the value NULL
        -It is always a good idea to check any dynamic memory request immediately using an if statement to make sure the memory is actually there before you try to use it

    int *pNumber = (int*)malloc(25*sizeof(int));
    if(!pNumber)
    {
        // code to deal with memory allocation failure...
    }

    -you can at least display a message and terminate the program
        -much better than allowing the program to continue and crash when it uses a NULL address to store something
*/

/*
    releasing memory

    -when you allocate memory dynamically, you should always release the memory when it is no longer required

    -memory that you allocate on the heap will be automatically released when your program ends
        -better to explicitly release the memory when you are done with it, even if it's just before you exit from the program
    
    -a memory leak occurs when you allocate some memory dynamically and you do not retain the reference to it, so you are unable to release the memory
        -often occurs within a loop
        -because you do not release the memory when it is no longer required, your program consumes more and more of the available memory on each loop iteration and eventually may occupy it all

    -to free memory that you have allocated dynamically, you must still have access to the address that references the block of memory

    -to release the memory for a block of dynamically allocated memory whose address you have stored in a pointer

    free(pNumber);
    pNumber = NULL:

    -the free() function has a formal parameter of type void*
        -you can pass a pointer of any type as the argument

    -as long as pNumber contains the address that was returned when the memory was allocated, the entire block of memory will be freed for further use
*/

/*
    calloc

    -the calloc() function offers a couple of advantages over malloc()
        -it allocates memory as a number of elements of a given size
        -it initializes the memory that is allocated so that all bytes are zero

    -calloc() function requires two argument values
        -number of data items for which space is requires
        -size of each data itemm

    -is declared in the stdlib.h header

    int *pNumber = (int*)calloc(75,sizeof(int));

    -the return value will be NULL if it was not possible to allocate the memory requested
        -very similar to using malloc(), but the big plus is that you know the memory area will be initialized to 0
*/

/*
    realloc

    -the realloc() function enables you to reuse or extend memory that you previously allocated using malloc() or calloc()

    -expects two argument values
        -a pointer containing an address that was previouly returned by a call to malloc(), calloc()
        -the size in bytes of the new memory that you want allocated

    -allocates the amount of memory you specify by the second argument
        -transfers the contents of the previously allocated memory referenced by the pointer that you supply as the first argument to the newly allocated memory
        -returns a void* pointer to the new memory or NULL if the operation fails for some reason
    
    -the most important feature of this operation is that realloc() preserves the contents of the original memory area
*/  

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str;

    //initial memory allocation
    str = (char *) malloc(15);
    strcpy(str,"jason");
    printf("String=%s, Address=%u\n",str,str);

    //Reallocating memory
    str = (char *) realloc(str,25);
    strcat(str,".com");
    printf("String=%s, Address=%p\n",str,str);
}