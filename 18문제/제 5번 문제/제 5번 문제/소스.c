#include  <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;

	printf("두개의 정수를 입력해주세요");
	scanf_s("%d %d", &num1,&num2);
	if (num1 > num2) {
		num1 = num1 - num2;
		printf("%d", num1);
	}
	else if (num1 < num2) {
		num2 = num2 - num1;
		printf("%d", num2);
	}

	return 0;
}