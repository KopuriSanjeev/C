#include <stdio.h>

int main(void) {
	// C program to sort elements in an array
	int arr[5] = {20,50,40,10,30} ;
	int n =5;
	int temp;
	
	for(int i=0;i<=n-2;i++)
	{
	    for(int j=i+1;j<=n-1;j++)
	    {
	        if(arr[i] > arr[j])
	        {
	            temp = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp;
	        }
	    }
	}
	
	for(int i=0;i<=4;i++)
	{
	        printf("%d \n",arr[i]);
	}
	
	return 0;
}

