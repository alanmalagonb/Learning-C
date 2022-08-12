/*
    -a complex number is a number of the form a+bi
        -i is the square root of minus one(imaginary)
        -a and b are real numbers

    -a is called the real part, and bi is called the imaginary part of the complex number

    -a complex number can also be regarded as an ordered pair of real numbers (a,b)
*/

/*
    Operations on Complex Numbers

    -you can apply the following operations to complex numbers

    -Modulus
        -the modulus of a complex number a+bi is square(a2+b2)

    -Equality
        -the complex numbers a+bi and c+di are equal if a equals c and b equals d

    -Addition
        -the sum of the complex numbers a+bi and c+di is (a+c) + (b+d)i

    -Multiplication
        -the product of the complex numbers a+bi and c+di is (ac-bd) + (ad+bc)i

    -Division
        -the result of dividing the complex number a+bi by c+di is (ac+bd)/(c2+d2)+((bc-ad)/(c2+d2))i

    -Conjugate
        -the conjugate of a complex number a+bi is a-bi    
*/

/*
    C programming and Complex numbers

    -the C99 standard introduces support for complex numbers and complex arithmetic

    -a C11 conforming compiler is not obligated to implement complex arithmetic

    -If it does not, it must implement the macro __STDC_NO_COMPLEX__

    -you can test whether your compiler supports complex arithmetic using preprocessor directives

    #ifdef ___STDC_NO_COMPLEX__
        printf("Complex arithmetic is not supported.\n");
    #else
        printf("Complex arithmetic is supported.\n");
    #endif

    -when the code executes, you will see output telling you whether complex arithmetic is supported
*/

/*
    Complex and Imaginary types in C

    -float _Complex
        -stores a complex number with real and imaginary parts as type float
    
    -double _Complex

    -long double _Complex

    -float _Imaginary
        -stores an imaginary number as type float

    -double _Imaginary

    -long double _Imaginary
*/

/*
    Declaring complex numbers

    -you can declare a variable to store complex numbers like this

    double _Complex z1; // Real and imaginary parts are type double

    -the _Complex keyword was chosen for the same reasons as type _Bool
        -to avoid breaking existing code

    -the complex.h header defines complex as being equivalent to _Complex
        -also defines many other functions and macros for working with complex numbers
    
    -with the complex.h header included, you can declare the varaible z1 like this

    double complex z1; // Real and imaginary parts are type double
*/  

/*
    Declaring Imaginary numbers

    -you use the _Imaginary keyword to define variables that store purely imaginary numbers
       -there is no real component 

    -the complex.h header defines imaginary as a more readable equivalent of _Imaginary

    double imaginary ix = 2.4*l;

    -casting an imaginary value to a complex type produces a complex number with a zero real part and a complex part the same as the imaginary number

    -casting a value of an imaginary type to a real type other than _Bool results in 0

    -casting a value of an imaginary type to type _Bool resulst in 0 for a zero imaginary value and 1 otherwise
*/

/*
    Complex functions

    -the creal() function returns the real part of a value of type double complex that is passed as the argument

    -the cimag() function returns the imaginary part

    double real_part = creal(z1); // Get the real part of z1
    double imag_part = cimag(z1); // Get the imaginary part of z1

    -you append an f to these functions names when you are working with float complex values (crealf() and cimagf())

    -you append a lowercase l when you are working with long double complex values (creall() and cimagl())

    -the conj() functions returns the complex conjugate of its double complex argument

    -the conjf() and conjl() functions return the complex conjugate for the other two complex types

    -you can write arithmetic expression involving complex and imaginary values using the arithmetic operator +,-,*,and /

    -the <complex.h> header also defines several math functions (cpow)

    -you can also use the operators !,++,--,&&,||,==,!= and unary & with complex numbers
*/

/*
    Creating complex numbers

    -to construct complex numbers you need a way to indicate the imaginary part of a number
        -there is no standard notation for an imaginary floating point constant

    -complex.h defines two keywords that can be used to create complex numbers
        -a representation of the complex number "0+1i"

    const float complex _Complex_I

    -complex.h also defines a shorter name for the same constant
        -_Complex_I is a bit of a mouthful

    const float complex I

    -the above (I) can causes problems if you want to use the identifier I for something else
        -#include <complex.h>
        -#undef I
*/

#include <stdio.h>
#include <complex.h>

#define __STDC_WANT_LIB_EXT1__ 1

int main () {

#ifdef __STDC_NO_COMPLEX__
    printf("Complex numbers are not supported.\n");
    exit(1);
#else
    printf("Complex numbers are supported.\n");

    double _Complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 - 4.0*I;

    printf("Working with complex number:\n");
    printf("Starting values: cx = %.2f%+.2fi cy = %.2f%+.2fi\n", creal(cx), cimag(cx), creal(cy), cimag(cy));

    double complex sum = cx+cy;
    printf("\nThe sum cx + cy = %.2f%+.2fi\n",creal(sum),cimag(sum));

    double complex difference = cx-cy;
    printf("\nThe difference cx - cy = %.2f%+.2fi\n",creal(difference),cimag(difference));

    double complex product = cx*cy;
    printf("\nThe product cx * cy = %.2f%+.2fi\n",creal(product),cimag(product));

    double complex quotient = cx+cy;
    printf("\nThe quotient cx / cy = %.2f%+.2fi\n",creal(quotient),cimag(quotient));

    double complex conjugate = conj(cx);
    printf("\nThe conjugate of cx = %.2f%+.2fi\n",creal(conjugate),cimag(conjugate));

    
    double complex a = 32.134 + 24.456 * I; // a is 32.134 + 24.456i
    double complex b = 23.789 + 42.987 * I; // b is 23.789 + 42.987i
    double complex c = 3.0 + 2.0*I;

    double complex sum2 = a+b; // perform complex addition
    double complex pwr = cpow(a,c); // perform complex exponentiation

    printf("a is %f + %fi\n", creal(a), cimag(a));
    printf("b is %f + %fi\n", creal(b), cimag(b));
    printf("a + b is: %f + %fi\n", creal(sum2), cimag(sum2));
    printf("a - b is: %f + %fi\n", creal(a-b), cimag(a-b));
    printf("a * b is: %f + %fi\n", creal(a*b), cimag(a*b));
    printf("a / b is: %f + %fi\n", creal(a/b), cimag(a/b));
    printf("a ^ b is: %f + %fi\n", creal(pwr), cimag(pwr));
 
#endif

}