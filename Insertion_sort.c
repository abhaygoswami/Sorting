					//@<Boring_CODE>
					//@Author: Abhay Goswami
					
					
					// Insertion Sort C-Program
#include<stdio.h>
void insertion_sort(int arr[],int n); //helper function
int main()
{
	int n;
	printf("\nEnter The Size of array: ");
	scanf("\n%d",&n);
	// Array of size n
	int arr[n];
	//scanning the elements
	printf("\nEnter The Elements of Array: \n");
	for(int i=0;i<n;i++)
		scanf("\n%d",&arr[i]);
	
	insertion_sort(arr,n);		//calling the function
	
	//printing the array after Sorting 
	printf("\nAfter Insertion Sort:\n");
	for(int i=0;i<n;i++)
		printf("\n%d",arr[i]);
	return 0;
}

void insertion_sort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int value=arr[i];	//storing the elements
		int hole=i;		//storing the index
		while(value<arr[hole-1]&&(hole-1>=0))
		{
			arr[hole]=arr[hole-1];	//swap the value
			hole--;
		}
		arr[hole]=value;
	}
}
// Anyone can make PR for the same 
