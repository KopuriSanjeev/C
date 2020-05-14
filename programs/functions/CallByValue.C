#include <stdio.h>

int main(void) {
	// your code goes here
	
	int a = 10, b = 20;
	printf("\n Values before swapping in main function %d %d",a,b);
	swap(a,b);
	printf("\n Values after swapping in main function %d %d",a,b);
	return 0;
}

void swap(int a,int b)
{
    int temp = a;
    a = b;
    b =temp;
    printf("\n Values after swapping in swap function %d %d",a,b);
}

// output is.
// Values before swapping in main function 10 20
// Values after swapping in swap function 20 10
// Values after swapping in main function 10 20
 
