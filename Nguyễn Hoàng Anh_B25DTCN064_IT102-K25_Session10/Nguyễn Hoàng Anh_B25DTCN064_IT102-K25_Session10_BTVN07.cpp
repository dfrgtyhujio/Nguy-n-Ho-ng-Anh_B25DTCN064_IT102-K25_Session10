#include <stdio.h>

int main(){
	
	int i, j, n, temp, searchValue, left, right, mid;
	
	printf("Nhap so gia tri trong mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i = 0; i < n; i++){
		printf("[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("Nhap gia tri can tim: ");
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
		printf("Phan tu co chi so %d co gia tri bang %d\n", mid, searchValue);
	} else{
		printf("khong tim thay");
	}
	
	return 0;
}

