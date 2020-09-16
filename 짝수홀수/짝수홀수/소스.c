#include <stdio.h>
int main() {
	int num[10];
	int num2 = 0;
	printf("10개의 정수를 입력해주세요");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
	}
	for (int j = 0; j < 10; j++) {
		for (int c = 0; c < 9; c++) {
			if (num[c] > num[c + 1]) {
				num2 = num[c];
				num[c] = num[c + 1];
				num[c + 1] = num2;
			}

		}
	}

	for (int i = 0; i < 10; i++) {
		if (num[i] % 2 != 0) {
			printf("%d", num[i]);
		}
	} 
	for (int j = 0; j < 10; j++) {
		for (int c = 10; c > 1; c--) {
			if (num[c] > num[c - 1]) {
				num2 = num[c];
				num[c] = num[c - 1];
				num[c - 1] = num2;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (num[i] % 2 == 0) {
			printf("%d", num[i]);
		}
	}

	return 0;
}