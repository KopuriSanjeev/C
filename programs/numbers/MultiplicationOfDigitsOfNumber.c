#include <stdio.h>

int main(void) {
	// Multiplication of digits of a number
	int n = 1234;
	int result = 1;
	
	int r,q; //remainder, quotient
	q = n ;
	
	while(q>0)
	{
	    r = q % 10;
	    result *= r;
	    q = q/10;
	}
	printf("Multiplication of digits of %d is %d",n,result);
	return 0;
}
