#include <stdio.h>
int main(){
	
	int arr[]={12,2,53,24,5};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0; i<n; i++){
		int minIndex=i;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		if(minIndex!=i){
			int temp = arr[minIndex];
			arr[minIndex]=arr[i];
			arr[i]=temp;
		}
	}
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}