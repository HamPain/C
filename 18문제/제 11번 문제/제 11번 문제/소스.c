#include <stdio.h>
int main() {
	int num1 = 2;
	int num2 = 0;

	printf("������ �Է�");
	scanf_s("%d", &num2);

	for (int i = 1; i < num2; i++)
	{
		num1 = num1 * 2;
		

	}

	printf("2�� %d������%d", num2,num1);

	return 0;
}