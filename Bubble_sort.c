					//@<Boring_CODE>
					//@Author: Abhay Goswami
					
					
					// Bubble Sort C-Program
#include <stdio.h>
#define max 10	#defining the size of max array

int main()
{
	int t;	//creating a temporary Varibale for storing the intermediate result
	int n;
	printf("\nDon't Exceed than 10\n");	//showing Message 
	printf("\nEnter The Number: ");
	scanf("\n%d",&n);
	int arr[max];
	//scanning the elements from user
	for(int i=0;i<n;i++)
		scanf("\n%d",&arr[i]);
	
	//Bubble sort
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])	
			{
				t=arr[j];
				arr[i]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	
	//print the sequence in increasing order
	for(int i=0;i<n;i++)
		printf("\n%d",arr[i]);
	return 0;
}
