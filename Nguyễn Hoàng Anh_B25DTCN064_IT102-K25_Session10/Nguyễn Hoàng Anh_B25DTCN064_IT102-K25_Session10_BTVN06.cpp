#include <stdio.h>

int main(){
	
	int i, n, j, temp, swap = 0;
	
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
                swap = 1;
            }
        }
        if(swap == 0){
            break;
        }
    }
	
	printf("Mang sau khi sap xep: ");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
