#include <stdio.h>

int main(){
	
	int i, n;
	int searchValue, isExist = 0;
	
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
			printf("Tim thay %d tai [%d]", searchValue, i);
			isExist = 1;
			break;
		}
	}
	
	if(isExist == 0){
		printf("Khong tim thay");
	}
	
	return 0;
}
