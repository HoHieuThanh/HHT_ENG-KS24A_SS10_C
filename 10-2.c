#include <stdio.h>
int main(){
	
	int arr[]={12,2,53,24,5};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}