#include <stdio.h>

int main(void) {
    int i = 0, j = 0;
    
    while( (i<5) && (j<5) )
    {
    printf("i: %d\t", i++);
    
    printf("j: %d\n", ++j);
    }
    
    printf("At the end othey have both equal values:\ni: %d\tj: %d\n", i, j);
    getchar();
    
    return 0;
}
