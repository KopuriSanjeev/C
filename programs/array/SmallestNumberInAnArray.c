
#include <stdio.h>

int main(void) {
	
	int a[5] = {10,5,25,90,26};
	int lowest = a[0] ;
	
	for(int i =1 ;i<=4;i++)
	{
	    if(a[i] < lowest)
	        lowest = a[i];
	}
	printf("\n lowest value in given array is %d ",lowest);
	
	
	return 0;
}
