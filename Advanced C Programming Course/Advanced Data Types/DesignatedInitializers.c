/*
    -designated initializers allow you to specify which elements of an array, structure or union are to be initialized by the values following an array index or a field by name (Struct or union)}

    -the C90 standard required the elements of an initializer to appear in a fixed order
        -the same as the order of the elements in the array or structure being initialized

    -the C99 standard allows you to initialize the elements in random order
        -specifying the array indices or structure field names they apply to

    -can be very useful if you have a struct that contains a large number of fields and you initially just want to set a few of them

    -also a good way of making your code more readable
*/

/*
    Syntax (array)

    -to specify an array index , write '[index] =' or '[index]' before the element value
        -the term in square brackets specifies which element of the array is to be initialized by the value of the term after the = sign
        -unspecified elements are default initialized, which means zeros are defined

    int a[6] = {[4]=29,[2]=15}; or
    int a[6] = {[4]29,[2]15};

    is equivalent to
    int a[6] = {0,0,15,0,29,0};

    -the index values must be constant expression
    -to initialize a range of elements to the same value, write '[first...last]=value'

    int a[]={[0 ... 9]=1,[10 ... 99]=2,[100]=3};
*/

#include <stdio.h>

struct point {int x, y; };

struct Point {
    int x,y,z;
};

int main() {
    int numbers[100] = {1,2,3,[3 ... 9]=10,[10]=80,15,[70]=50,[42]=400};
    
    for(int i = 0; i<20;i++)
        printf("%d ",numbers[i]);
    
    printf("\n%d ", numbers[70]);
    printf("%d",numbers[42]);

    int numbers2[] = {1,2,3,[10]=80,15,[70]=50,[42]=400};

    int n = sizeof(numbers2) / sizeof(numbers2[0]);
    printf("%d",n);

    struct point p = {.y=2,.x=3};
    struct point p1a = {y:2 , x:3};
    struct point p2a = {2,3};

    struct Point p1 = {.y=0,.z=1,.x=2};
    struct Point p2 = {.x=20};

    printf("\nx = %d, y = %d, z = %d\n",p1.x,p1.y,p1.z);
    printf("x = %d\n",p2.x);

    struct point pts[5] = { [2].y = 5, [2].x = 6, [0].x = 2};
    int i;
    for (i = 0; i < 5; i++)
        printf("%d %d\n",pts[i].x, pts[i].y);

    return 1;
}