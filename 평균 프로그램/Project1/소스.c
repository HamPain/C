#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	int i = 1;

	printf("���Ͻô� �Է°��� ������ �����ʽÿ�");
	scanf_s("%d", &num1);

	for(int i=1; i <=num1; i ++){
		printf("������ �Է����ּ���");
		scanf_s("%d", &num2);
		sum = sum + num2;
		}

	printf("���� : %d\n", sum);
	printf("��� : %f\n", (double)sum / (double)num1);







return 0;
}
