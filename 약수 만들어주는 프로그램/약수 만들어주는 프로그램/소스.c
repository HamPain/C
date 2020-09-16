#include <stdio.h>

int main() {
	int num1 = 0;
	int sum1 = 0;
	int i = 1;

	printf("약수를 구해드립니다\n");
	printf("정수를 입력하세요");

	scanf_s("%d약수는?", &num1);
	for (int i = 1; i <= num1; i++) {
		if (num1%i == 0) {
			printf("%d\n", i);
			sum1++;
			

			}
	
	}

	printf("총 %d 개 입니다.", sum1);
	


	return 0;
}