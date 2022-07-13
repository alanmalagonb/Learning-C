// This program demonstrates the effect of adding an integer value to a pointer

#include <stdio.h>
#include <string.h>

void anotherExample();

int main(void)
{
    char multiple[] = "a string";
    char *p = multiple;

    for(int i=0; i<strnlen(multiple,sizeof(multiple)); ++i)
        printf("multiple[%d]=%c *(p+%d)=%c &multiple[%d]=%p p+%d=%p\n",i,multiple[i],i,*(p+1),i,&multiple[i],i,p+i);

    anotherExample();

    return 0;
}

void anotherExample(){
    int i;
    long multiple[]={15L,25L,35L,45L};
    long *p=multiple;

    for(int i=0; i<sizeof(multiple)/sizeof(multiple[0]); ++i)
        printf("address p+%d (&multiple[%d]): %llu   *(p+%d) value: %d\n", i, i, (unsigned long long)(p+i), i, *(p+i));

    printf("\n  Type long occupies: %d bytes\n",(int)sizeof(long));
}
