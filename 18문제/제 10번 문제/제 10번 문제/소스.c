#include <stdio.h>
int main() {
	int num1 = 0;
	int count = 0;


	printf("���Ͻô� ������ �Է����ּ���");
	scanf_s("%d", &num1);// ���ڴ� 256

	while (1) {
		num1 = num1 / 2; // 0 �� 256 ������ 2 = 128 
		count++;
		if (num1 == 1) {
			break;
		}

	}



	printf("%d", count);
	return 0;
}