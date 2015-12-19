#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "complex.h"


int main()
{
        test();

        return 0;
}

void test()
{

        COMPLEX c1;             
        c1.x = 1.;           
        c1.y = 2.;         

        COMPLEX c2;           
        c2.x = 3.;           
        c2.y = 4.;            

     
        COMPLEX *cp1;             
        cp1 = &c1;              

        COMPLEX *cp2;               
        cp2 = &c2;                       

	COMPLEX res1;              
	res1 = mult2(cp1,cp2);

        assert (-5. == res1.x); 
        assert (10. == res1.y);
        printf(" mult2 is working \n ");
  
        COMPLEX res2;          
        res2 = square(cp1);
        assert (-3. == res2.x);
        assert (4.  == res2.y);
        printf("square is working \n ");
   
       
	COMPLEX res3;
        res3 = add2(cp1, cp2);

        assert (4. == res3.x);
        assert (6. == res3.y);
        printf("add2 is working \n ");

        COMPLEX res4;    
        res4 = juliamap(cp1,cp2);
        assert (0. == res4.x);
        assert (8. == res4.y);
        printf("juliamap is working \n");


}
