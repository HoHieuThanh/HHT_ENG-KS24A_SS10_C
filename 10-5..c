#include <stdio.h>
int main(){
	
	int arr[8]={2,4,1,9,3,8,5,7};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++)
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	printf("Mang sau khi sap xep: ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	
	int item;
	printf("\nNhap gia tri can tim: ");
	scanf("%d", &item);	
	int start=0;
	int end=n-1;
	int mid;
	int flag=-1;

	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==item){
			flag++;
		}
		if(arr[mid]>item){
			end= mid-1;
		}else if(arr[mid]<item){
			start=mid+1;
		}else{
			if(flag != -1){
				printf("Phan tu %d o vi tri %d", item, mid);
				break;
			}else{
				printf("Khong tim thay phan tu trong mang");
				break;
			}
		}
	}
	return 0;
}
