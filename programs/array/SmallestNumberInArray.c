#include <stdio.h>

int main(void) {
	// To find largest no in an Array
	
	int arr[] = {20,15,98,76,33};
	int smallest = arr[0];
	
	for(int i=1;i<=4;i++)
	{
	    if(smallest > arr[i])
	        smallest = arr[i];
	    
	}
	printf("smallest number in array is %d",smallest);
	return 0;
}

