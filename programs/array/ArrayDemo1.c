#include <stdio.h>

int main(void) {
	
  
  // Write a C program to print no of +ve no, no of -ve no's, no of even no's, no of odd no's in an given array.
	int arr[] = {-20,59,36,-158,96};
	int positivenos = 0;
	int negativenos = 0;
	int evennos = 0;
	int oddnos = 0;
	
	for(int i=0;i<=4;i++)
	{
	    int n = arr[i];
	    
	    if(n >= 0)
	        positivenos++;
	    else
	        negativenos++;
	    
	    if(n%2==0)
	        evennos++;
	    else
	        oddnos++;
	}
	printf("\n Number of positive numbers in given array are %d",positivenos);
	printf("\n Number of negative numbers in given array are %d",negativenos);
	printf("\n Number of even numbers in given array are %d",evennos);
	printf("\n Number of odd numbers in given array are %d",oddnos);
	
}

