					//@<Boring_CODE>
					//@Author: Abhay Goswami
					
					
// Bubble Sort C-Program

#include <stdio.h>

int main()
{
	int temp;
	int n;
	printf("\nTaking any number of input from user\n");
	printf("\nEnter The Number: ");
	scanf("\n%d",&n);
	int arr[n];
	//scanning the elements from user
	for(int i=0;i<n;i++)
		scanf("\n%d",&arr[i]);
	
//Bubble sort
	
	int counter = n;
    while(counter>=1){
        for(int i=1;i<counter;i++){
            if(arr[i-1]>arr[i]){
                temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
            }

        }
        counter -= 1;
    }
	
//Print the sequence in increasing order
	for(int i=0;i<n;i++)
		printf("\n%d",arr[i]);
	return 0;
}