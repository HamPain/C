#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;



	printf("�ΰ��� ������ �Է��ϼ���\n");
	scanf_s("%d %d", &num1,&num2);

	
	
	for (int i = 1; i <= num1 && i<=num2; i++) {
		if (num1%i == 0 &&  num2%i == 0) {
			sum = i;

		
			
		}
	}
	printf("%d", sum);
return 0;
}