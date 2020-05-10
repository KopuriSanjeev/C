#include <stdio.h>

int main(void) {
    // Linear Search in an Array.
    int arr[] = {1,50,80,99,56,78,23,227,500,56};
    int number = 56 ;  // Number to be searched
    int count = 0;
    for(int i=0;i<=9;i++)
    {
        if(number == arr[i])
        {
            printf("\nNumber found at location %d",(i+1));
            count++;
        }
    }
    printf("\nNumber found %d times",count);
    
	
	
	return 0;
}

