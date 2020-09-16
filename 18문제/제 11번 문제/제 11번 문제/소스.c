#include <stdio.h>
int main() {
	int num1 = 2;
	int num2 = 0;

	printf("정수의 입력");
	scanf_s("%d", &num2);

	for (int i = 1; i < num2; i++)
	{
		num1 = num1 * 2;
		

	}

	printf("2의 %d제곱은%d", num2,num1);

	return 0;
}