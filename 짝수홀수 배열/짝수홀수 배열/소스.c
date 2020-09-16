#include <stdio.h>
int main() {
	int num1[10];
	int num2 = 0;

	for (int b = 0; b < 10; b++) {
		scanf_s("%d", &num1[b]);
	}

	for (int j = 0; j < 10; j++) {
		for (int c = 0; c < 9; c++) {
			if (num1[c] > num1[c + 1]) {
				num2 = num1[c];
				num1[c] = num1[c + 1];
				num1[c + 1] = num2;
			}

		}
	}


			for (int b = 0; b < 10;b++) {
				if (num1[b] % 2 == 0) {
					printf("Â¦¼ö%d\n", num1[b]);

				}
			}
			for (int b = 0; b < 10; b++) {
				if (num1[b] % 2 == 1) {
					printf("È¦¼ö%d\n", num1[b]);
				}
			}




return 0;
		

}