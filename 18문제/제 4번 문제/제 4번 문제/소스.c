#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("2개의 정수를 입력해 주세요");
	scanf_s("%d %d", &num1, &num2);
	for (int num1 = 0; num1 <= num2; num1++)
	{
		num3 = num3 + num1;
	}

	printf("%d", num3);

	return 0;
}