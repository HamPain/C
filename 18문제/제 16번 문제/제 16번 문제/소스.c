#include <stdio.h>
int main() {
	int num1[6] = { 1,2,3,4,5,6 };
	int num2 = 0;
	int *ptr1;
	int *ptr2;
	ptr1 = &num1[0];
	ptr2 = &num1[6];

	for (int j = 0; j < 6; j++) {
		for (int c = 0; c < 6; c++) {
			if (ptr1[c] < ptr1[c + 1]) {
				num2 = ptr1[c];
				ptr1[c] = ptr1[c + 1];
				ptr1[c + 1] = num2;
			}

		}
	}

	for (int b = 0; b < 6; b++) {
		printf("%d", ptr1[b]);
	}





	return 0;


}