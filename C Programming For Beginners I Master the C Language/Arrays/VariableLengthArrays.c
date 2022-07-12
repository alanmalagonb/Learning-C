/*
    Variable length arrays

    -the term variable in variable-length array does not mean that you can modify the length of the array after you create it
        -a VLA keeps the same size after creation
    
    -variable length arrays allow you to specify the size of an array with a variable when creating an array

    -C99 introduced variable-length arrays primarily to allow C to become a better language for numerical computing
        -VLAs make it easier to convert existing libraries of FORTRAN numerical calculation routines to c

    -you can not initialize a VLA in its declaration
*/

/*
    Valid and invalid declarations of an array

    int n=5;
    int m=8;
    float a1[5]; //yes
    float a2[5*2+1]; //yes
    float a[sizeof(int)+1]; //yes
    float a[-4]; // no, size must be >0
    float a[0]; // no, size must be >0
    float a[2.5]; // no, size must be an integer
    float a[(int)2.5]; // yes, typecast float to int constant
    float a[n]; // not allowed before C99, VLA
    float a[m]; // not allowed before C99, VLA
*/