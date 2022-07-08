/*
    Format Specifiers
    -Are used when displaying variables as output
        -They specify the type of data of the variable to be displayed
    int sum=89;
    printf("The sum is %d\n",sum);

    -The printf() function can display as output the values of variables
        -has two items or arguments enclosed within the parentheses
        -arguments are separated by a comma
        -first argument to the printf() routine is always the character string to be displayed
        -along with the display of the character string, you might also frequently want to have the value of certain program variables displayed
*/

#include <stdio.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("integerVar = %i floatingVar = %f\n", integerVar, floatingVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    float x = 3.993232323;

    printf("%.2f",x);

    return 0;
}

/*
    Type                      | Constant Examples                 | printf chars
    char                        'a','\n'                            %c
    _Bool                       0,1                                 %i, %u
    short int                   -                                   %hi,%hx,%ho
    unsigned short int          -                                   %hu,%hx,%ho
    int                         12,-97,0xFFE0,0177                  %i,%x,%o
    unsigned int                12u,100U,0XFFu                      %u,%x,%o
    long int                    12L,-2001,0xffffL                   %li,%lx,%lo
    unsigned long int           12UL,100ul,0xffeeUL                 %lu,%lx,%lo
    long long int               0xe5e5e5e5LL,500ll                  %lli,%llx,%llo
    unsigned long long int      12ull,0xffeeULL                     %llu,%llx,%llo
    float                       12.34f,3.1e-5f,0x1.5p10,0x1P-1      %f,%e,%g,%a
    double                      12.34,3.1e-5,0x.1p3                 %f,%e,%g,%a
    long double                 12.341,3.1e-51                      %Lf,%Le,%Lg
*/