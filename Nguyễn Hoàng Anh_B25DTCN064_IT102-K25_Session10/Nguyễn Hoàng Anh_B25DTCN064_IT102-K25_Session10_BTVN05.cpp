#include <stdio.h>

int main(){
	
	int i, n;
	int searchValue, count = 0; 
	
	printf("Nhap so gia tri trong mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i = 0; i < n; i++){
		printf("[%d] = ",i);
		scanf("%d", &a[i]);
	}
	
	printf("Nhap gia tri can tim: ");
	scanf("%d", &searchValue);
	
	for(i = 0; i < n; i++){
		if(a[i] == searchValue){
			count++;
		}
	}
	
	if(count != 0){
		printf("Tong so lan so hien cua %d la %d", searchValue, count);
	} else{
		printf("Khong tim thay");
	}
	
	return 0;
}
