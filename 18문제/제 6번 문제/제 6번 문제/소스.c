#include <stdio.h>
int main() {
	double ctf = 0;
	int num1 = 0;
	double num2 = 0;

	printf("�µ��� ������ �������ּ���\n1.ȭ��\n2.����");
	scanf_s("%d",&num1);
	if (num1 == 1) {
		printf("ȭ�� �µ��� �Է����ּ���");
		scanf_s("%1lf",&num2);
		num2 = (num2 - 32)/1.8;
		printf("�̴� ���� �µ��� %f���Դϴ�.\n", num2);
	}
	else if (num1 == 2) {
		printf("���� �µ��� �Է����ּ���");
		scanf_s("%1lf",&num2);
		num2 = (num2*1.8) + 32;
		printf("�̴� ȭ�� �µ��� %f���Դϴ�.\n", num2);
	}

	return 0;
}