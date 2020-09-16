#include <stdio.h>
int main() {
	int num1 = 0; // 초
	int num2 = 0; // 분
	int num3 = 0; // 시
	


	printf("입력하고싶은 (초)단위를 입력해주세요");
	scanf_s("%d", &num1);
	
	num2 = num1 / 60;
	num1 = num1 % 60;
	num3 = num2 / 60;
	num2 = num2 % 60;

	

	
	printf("%d시간 %d분 %d초", num3, num2, num1);

	return 0;
}