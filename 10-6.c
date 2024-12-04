#include <stdio.h>
int main(){
	
	int arr[7]={4,2,6,9,4,6,6};
	int i, index[100], input, count=0;
	int n = sizeof(arr)/sizeof(int);
	printf("Nhap vao so can tim: ");
	scanf("%d", &input);
	for(i=0; i<n; i++){
		if(arr[i]==input){
			index[count]=i;
			count++;
		}
	}
	if(count != 0){
		printf("Phan tu %d o vi tri: ", input);
		for(i=0; i<count; i++){
			printf("%d ", index[i]);
		}
	}else{
		printf("Khong tim thay phan tu");
	
	return 0;
}
