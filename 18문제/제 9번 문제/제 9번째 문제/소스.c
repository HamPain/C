#include <stdio.h>
int main() {
	int num1 = 0; // ��
	int num2 = 0; // ��
	int num3 = 0; // ��
	


	printf("�Է��ϰ���� (��)������ �Է����ּ���");
	scanf_s("%d", &num1);
	
	num2 = num1 / 60;
	num1 = num1 % 60;
	num3 = num2 / 60;
	num2 = num2 % 60;

	

	
	printf("%d�ð� %d�� %d��", num3, num2, num1);

	return 0;
}