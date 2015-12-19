#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "complex.h"

COMPLEX mult2(const COMPLEX *a, const COMPLEX *b){
	COMPLEX ab;
	ab.x = (a->x)*(b->x)-(a->y)*(b->y);
	ab.y = (a->x)*(b->y)+(b->x)*(a->y);

	return ab;
}

COMPLEX square(const COMPLEX *a){
        return mult2(a, a);
}

COMPLEX add2(const COMPLEX *a, const COMPLEX *b){
	COMPLEX ab;
	ab.x = (a->x) + (b->x);
	ab.y = (a->y) + (b->y);
	return ab;
}

COMPLEX juliamap(const COMPLEX *z, const COMPLEX *c){
  COMPLEX ab = square(z);
  return add2(&ab, c);
}

void  complex_print(const COMPLEX *a){
	printf("z = %f  + %f \n", a->x, a->y);
}
