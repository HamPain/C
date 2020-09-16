#include <stdio.h>
int main() {
	int num1 = 0;
	int count = 0;


	printf("원하시는 정수를 입력해주세요");
	scanf_s("%d", &num1);// 숫자는 256

	while (1) {
		num1 = num1 / 2; // 0 은 256 나누기 2 = 128 
		count++;
		if (num1 == 1) {
			break;
		}

	}



	printf("%d", count);
	return 0;
}