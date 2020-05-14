#include <stdio.h>

int main(void) {
	// your code goes here
	
	int a = 10, b = 20;
	swap(&a,&b);
	printf("\n Values after swapping in main function %d %d",a,b);
	return 0;
}

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// output is
// Values after swapping in main function 20 10
