/*
    Initializing an array

    -To initialize an array's values, simply provide the values in list
        -values in the list are separated by commas in the entire list is enclosed in a pair of braces

    int counter[5] = {0,0,0,0,0};

    -declares an array called counters to contain five integer values and initializes each of these elements to zero

    int integers[5] = {0,1,2,3,4};

    -declares an array named integers and sets the value of integers[0] to 0, integers[1] to 1, integers[2] to 2, and so on

    -It is not necessary to completely initialize an entire array

    -If fewer initial value are specified, only an equal number of elements are initialized
        -remaining values in the array are set to zero

    float sample_data[500] = {100.0,300.0,500.5};

    -initializes the first three values of sample_data to 100.0, 300.0 and 500.5, and sets the remaining 497 elements to zero
*/

/*
    Designated Initializers

    -C99 added a feature called designated initializers
        -allows you to pick and choose which elements are initialized

    -by enclosing an element number in a pair of brackets, specific array elements can be initialized in any order

    float sample_data[500] = { [2]=500.5, [1]=300.0, [0]=100.0};

    -initializes the sample_data array to 100.0,300.0, and 500.5 for the first three values

    int arr[6] = {[5]=212}; // initialize arr[5] to 212
*/

#include <stdio.h>

#define MONTHS 12

int main(void)
{
    // traditional initializer

    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index = 0; index < MONTHS; index++)
    {
        printf("Month %d has %2d days.\n",index+1,days[index]);
    }
    
    // designated initializers
    
    int days2[MONTHS] = {31,28, [4]=31,30,31,[1]=29};
    int i;
    
    for(i=0;i<MONTHS;i++)
        printf("%2d %d\n",i+1,days2[i]);

    int array_values[10] = {0,1,4,9,16};
    int i2;
    for(i2=5;i2<10;++i2)
        array_values[i2]=i2*i2;

    for(i2=0;i2<10;++i2)
        printf("array_values[%i]=%i\n",i2,array_values[i2]);
        

    return 0;   
}

/*
    Repeating an initial value

    -C does not provide any shortcut mechanisms for initializing array elements
    -no way to specify a repeat count
    -if it were desired to initially set all 500 values of sample_data to 1, all 500 would have to be explicitly assigned
    -to solve this problem, you will want to initialize the array inside the program using a loop
*/
