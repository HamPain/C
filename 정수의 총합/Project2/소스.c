#include <stdio.h>
int main() {
	int num1 = 0;
	int sum1 = 0;
	

	while (1) {
		printf("정수를 입력해주세요");
		scanf_s("%d", &num1);
		sum1 = num1 + sum1;
		num1 == 0;
		if (num1 == 0) {
			printf("총합은 %d 입니다.", sum1);
			break;
		}

	}

	return 0;
}