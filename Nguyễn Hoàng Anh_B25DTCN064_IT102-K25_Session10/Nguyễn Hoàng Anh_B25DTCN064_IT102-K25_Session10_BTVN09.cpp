#include <stdio.h>

int main(){
	
	int i, j, n, id, temp;

	
	printf("Nhap so san pham: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i = 0; i < n; i++){
		printf("Gia san pham %d: ",i);
		scanf("%d", &a[i]);
	}
	
	printf("Nhap ma san pham can tim: ");
	scanf("%d", &id);
	
	if(id >= 0 && id < n){
        printf("Gia cua san pham co ma %d la: %d\n", id, a[id]);
    } else {
        printf("Khong tim thay san pham!\n");
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
	
	printf("\nDanh sach gia san pham sau khi sap xep: ");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
