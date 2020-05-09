#include <stdio.h>

int main(void) {
	// To find largest no in an Array
	
	int arr[] = {20,15,98,76,33};
	int largest = arr[0];
	
	for(int i=1;i<=4;i++)
	{
	    if(largest < arr[i])
	        largest = arr[i];
	    
	}
	printf("largest number in array is %d",largest);
	return 0;
}
