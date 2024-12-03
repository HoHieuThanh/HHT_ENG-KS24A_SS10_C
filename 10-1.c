#include <stdio.h>
int main(){
	
	int i, input, count=0;
	int arr[]={1,2,3,4,5};
	printf("Nhap vao phan tu: ");
	scanf("%d", &input);
	for(i = 0; i < 5; i++){
		if(input==arr[i]){
			printf("Phan tu o vi tri %d", i+1);
			count++;
		}
	}
	if(count==0){
		printf("Khong co phan tu trong mang");
	}
	
	
	return 0;
}