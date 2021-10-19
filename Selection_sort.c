					//@<Boring_CODE>

					//@Author: Abhay Goswami
					
					
					//Selection Sort C-Program
#include <stdio.h>

void select_sort(int arr[],int n){
	for(int i=0;i<(n-1);i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
	int n;
	
	printf("\nEnter The Number: ");
	scanf("\n%d",&n);
	// Array of size n
	int arr[n];
	printf("\nEnter The Number of Array: \n");
	for(int i=0;i<n;i++){
		scanf("\n%d",&arr[i]);
	}
	
	select_sort(arr,n);	//calling the function
	
	printf("\nAfter Selection Sort: \n");
	for(int i=0;i<n;i++)
		printf("\n%d",arr[i]);
	
	return 0;
}