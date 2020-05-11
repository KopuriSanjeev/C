#include <stdio.h>

int main(void) {
	// Sort an elements of an error.
	int arr[5] = {10,20,30,40,50};
	int low = 0, high = 4, mid = 2;
	int element = 40;
	
	while(low<=high)
	{
	    if(arr[mid] < element)
	    {
	        // element is present in 2nd half of array
	        low = mid + 1;
	        mid = (low+high) / 2;
	    }
	    else if(arr[mid] > element)
	    {
	        // element is present in 1st half of array
	        high = mid - 1;
	        mid = (low+high) / 2;
	    }
	    else if(arr[mid] == element)
	    {
	       // arr[mid] == element
	        printf("\n element %d is found",element);
	        break;
	    }
	}
	if(low > high)
	{
	    printf("\n element %d is not found",element);
	}
	
	return 0;
}

