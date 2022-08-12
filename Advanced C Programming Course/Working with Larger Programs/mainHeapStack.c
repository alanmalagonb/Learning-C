#include <stdio.h>
#include <stdlib.h>

// Stack

double multiplyByTwo(double input){
    double twice = input * 2.0;
    return twice;
}

int main (int argc, char *argv[]){
    int age = 30;
    double salary = 12345.67;
    double myList[3] = {1.2,2.3,3.4};

    printf("double your salary is %.3f\n", multiplyByTwo(salary));

    return 0;
}

// Heap

double *multiplyByTwo2(double *input){
    double *twice = malloc(sizeof(double));
    *twice = *input * 2.0;
    return twice;
}

int main (int argc, char * argv[]) {
    int  *age = malloc(sizeof(int));
    *age = 30;
    double *salary = malloc(sizeof(double));
    *salary = 12345.67;
    double *myList = malloc(3 * sizeof(double));
    myList[0] = 1.2;
    myList[1] = 2.3;
    myList[2] = 3.4;
    
    double *twiceSalary = multiplyByTwo2(salary);

    printf("double your salary is %.3f\n", *twiceSalary);

    free(age);
    free(salary);
    free(myList);
    free(twiceSalary);

    return 0;   
}

/*
    Characteristics of the Stack

    -very fast access
    
    -do not have to explicitly de-allocate variables

    -space is managed efficiently by CPU
        -memory is allocated in a contiguous block
        -memory will  not become fragmented

    -local variables only

    -limit on the size of the stack
*/

/*
    Characteristics of the Heap

    -variables can be accessed globally

    -no limit on memory size

    -(relatively) slower access

    -you are responsible for managing the memory

    -no guaranteed efficient use of space
        -memory is allocated in any random order
        -memory may become fragmented over time as blocks of memory are allocated, then freed

    -variables can be resized using realloc()
*/