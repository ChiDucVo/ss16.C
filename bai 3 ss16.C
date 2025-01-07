#include <stdio.h>
void calculateSum(int a, int b, int *result){
	*result = a + b;
}
int main (){
	int a = 10;
	int b = 20;
	int sum;
	
	calculateSum(a, b, &sum);
	printf("Tong %d va %d la: %d", a, b, sum);

	return 0;
}
