#include <stdio.h>

int main(){
	
	int i, n, j, temp, searchValue, left, right, mid;

	
	printf("Nhap so gia tri trong mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i = 0; i < n; i++){
		printf("[%d] = ",i);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 -i; j++){
			if(a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	printf("\nMang sau khi sap xep: ");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
	
    printf("\nNhap gia tri can tim: ");
	scanf("%d", &searchValue);
	
	left = 0, right = n - 1;
	
	do{
		mid = left + (right - left) / 2;
		
		if(a[mid] < searchValue){
			left = mid + 1;
		}
		
		if(a[mid] > searchValue){
			right = mid - 1;
		}
	}while(a[mid] != searchValue && left != right);
	
	
	if(a[mid] == searchValue){
		printf("\nChi so cua phan tu can tim: %d", mid);
	} else{
		printf("\nkhong tim thay");
	}
	
	return 0;
}
