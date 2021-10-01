					//@<Boring_CODE>
					//@Author: Abhay Goswami
					
					
// Bubble Sort C-Program

#include <stdio.h>
#define max 10

int main()
{
	int temp;
	int n;
	printf("\nDon't Exceed than 10\n");
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
				temp=arr[j];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
//Print the sequence in increasing order
	for(int i=0;i<n;i++)
		printf("\n%d",arr[i]);
	return 0;
}
