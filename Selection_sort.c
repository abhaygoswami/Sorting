					//@<Boring_CODE>

					//@Author: Abhay Goswami
					
					
					//Selection Sort C-Program
#include <stdio.h>

void select_sort(int arr[],int n);
int smallest(int arr[],int k,int n);

int main()
{
	int arr[10],n;
	
	printf("\nEnter The Number: ");
	scanf("\n%d",&n);
	
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
int smallest(int arr[],int k,int n)
{
	int pos=k,small=arr[k],i;
	for(i=k+1;i<n;i++)
	{
		if(arr[i]<small)	//comparing 
		{
			small=arr[i];	//small give the value at arr[i]
			pos=i;	//store the index of the smallest number in pos variable
		}
	}
	return pos;
}
void select_sort(int arr[],int n)
{
	int k,pos,temp;
	for(k=0;k<n;k++)
	{
		pos=smallest(arr,k,n);		//take the index of smallest number from smallest function and put it in pos variable
		
		//swapping 
		
		temp=arr[k];		
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}

