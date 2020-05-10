#include <stdio.h>

int main(void) {
	// Program to print first 10 numbers in Fibonnaci series.
	int a = 0, b = 1 ; // first 2 numbers in Fibonnaci series are fixed.
	int c;
	
	printf("Fibonnaci series elements are:");
	printf("\n%d",a);
	printf("\n%d",b);
	
	for(int i=1;i<=8;i++)
	{
	    c = a+b;
	    printf("\n%d",c);
	    
	    a = b;
	    b = c;
	}
	
	
	return 0;
}

