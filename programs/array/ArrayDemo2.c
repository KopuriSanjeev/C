#include <stdio.h>

int main(void) {
	
	int arr[] = {89,56,45,78,25};
	float avg;
	int sum = 0;
	int count = 0;
	
	for(int i=0;i<=4;i++)
	{
	    sum = sum + arr[i];    
	}
	avg = sum/5 ;
	
    for(int i=0;i<=4;i++)
    {
        if(arr[i] < avg)
            count++;
    }
    
    printf("no of values which are less than avg are %d",count);
	
}

