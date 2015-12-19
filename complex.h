#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>


struct complex 
{
        long double x;
        long double y;

};

typedef struct complex COMPLEX; 

COMPLEX mult2(const COMPLEX *a, const COMPLEX *b);
COMPLEX square(const COMPLEX *a);
COMPLEX add2(const COMPLEX *a, const COMPLEX *b);
COMPLEX juliamap(const COMPLEX *a, const COMPLEX *b);
void complex_print(const COMPLEX *a);
void test();
