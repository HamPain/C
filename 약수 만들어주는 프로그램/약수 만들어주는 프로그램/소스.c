#include <stdio.h>

int main() {
	int num1 = 0;
	int sum1 = 0;
	int i = 1;

	printf("����� ���ص帳�ϴ�\n");
	printf("������ �Է��ϼ���");

	scanf_s("%d�����?", &num1);
	for (int i = 1; i <= num1; i++) {
		if (num1%i == 0) {
			printf("%d\n", i);
			sum1++;
			

			}
	
	}

	printf("�� %d �� �Դϴ�.", sum1);
	


	return 0;
}