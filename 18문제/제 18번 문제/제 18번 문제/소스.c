#include <stdio.h>
void swap(int *ptr1, int *ptr2, int *ptr3) {
	int num4 = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = num4;

}

int main() {


	int num1 = 3;
	int num2 = 4;
	int num3 = 5;
	
	swap(&num1, &num2, &num3);

	printf("%d %d %d", num1, num2, num3);



	return 0;
}