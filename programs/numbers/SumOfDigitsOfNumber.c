#include <stdio.h>

int main(void) {
	// Sum of digits of a number
	int n = 1234;
	int sum = 0;
	
	int r,q; //remainder, quotient
	q = n ;
	
	while(q>0)
	{
	    r = q % 10;
	    sum += r;
	    q = q/10;
	}
	printf("Sum of digits of %d is %d",n,sum);
	return 0;
}
