/*
    -a variable-length array is an array whose length, or size, is defined in terms of an expression evaluated at execution-time
        -enable you to work with arrays in your programs without having to give them a constant size

    -the term variable in variable-length array does not mean that you can modify the length of the array after you create it
        -once created, a VLA keeps the same size

    -the term variable means that you can use a variable when specifying the array dimensions when first creating the array
*/

#include <stdio.h>

int sum2d(int rows, int cols, int array[rows][cols]) // array is a VLA
{
    int r;
    int c;
    int tot = 0;
    for (r=0; r<rows; r++)
        for(c=0; c<cols; c++)
            tot+=array[r][c];
    return tot;
}

void array(int size){
    char alpha[size];
    int x = 0;

    while(x<size){
        alpha[x] = 'A' + x;
        printf("alpha is: %c: \n", alpha[x]);
        x++;
    }
}

int main() {
    size_t rows = 0;
    size_t columns = 0;

    printf("Enter the number of rows you want to store: ");
    scanf("%zd", &rows);
    printf("Enter the number of columns in a row: ");
    scanf("%zd", &columns);

    float beans[rows][columns];

    array(5);
    array(20);
    array(9);

    return 0;
}

/*
    C11
    
    -a C11-conforming compiler does not have to implement support for variable length arrays because it is an optional feature

    -if it does not, the symbol __STDC_NO_VLA__ must be defined as 1

    -you can check for support for variable length arrays using this code

    #ifdef __STDC_NO_VLA__
        printf("Variable length arrays are not supported.\n");
        exit(1);
    #endif
*/

/*
    Conclusion

    -Linus Torvalds is quoted saying

    "USING VLA'S IS ACTIVELY STUPID! It generates much more code, and much slower code (and more fragile code), than just using a fixed key size would have done."

    -Torvalds goes on to say that Linux is free of VLAs and he's proud of that fact

    -there is a lot of demo/academic code on VLAs and even less material out there in the training world

    -it is possible in C to create a variable length array
        -just not necessary and it's something I would recommend you avoid
            -If you need to dynamically allocate and even reallocate storage buffers, you can always use pointers
*/
