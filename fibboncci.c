#include <stdio.h>

int  main(void){
	unsigned long fib1 =1, fib2=1,rfib=0,i=0;
	printf("%d\t", fib1);
	printf("%d\t", fib2);
	for(i=0;i<100;i++)
	{
		rfib = fib1+fib2;
		fib1=fib2;
		fib2=rfib;
		printf("%d\t", rfib);
	}
	
	return 0;
}
