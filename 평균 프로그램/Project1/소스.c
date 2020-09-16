#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	int i = 1;

	printf("원하시는 입력값의 갯수를 적으십시요");
	scanf_s("%d", &num1);

	for(int i=1; i <=num1; i ++){
		printf("정수를 입력해주세요");
		scanf_s("%d", &num2);
		sum = sum + num2;
		}

	printf("총합 : %d\n", sum);
	printf("평균 : %f\n", (double)sum / (double)num1);







return 0;
}
