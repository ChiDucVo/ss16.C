#include <stdio.h>
void printArray(int *array, int size){
	printf("Cac phan tu trong mang :\n");
	for(int i = 0; i < size ;i++){
		printf("%d", *(array + i));
	}
	printf("\n");
}

int main(){
	int arr[] = {10, 20, 30, 40, 50};
	int size = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, size);
	
	return 0;
}
