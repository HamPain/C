#include <stdio.h>
int main() {
	double ctf = 0;
	int num1 = 0;
	double num2 = 0;

	printf("온도의 유형을 선택해주세요\n1.화씨\n2.섭씨");
	scanf_s("%d",&num1);
	if (num1 == 1) {
		printf("화씨 온도를 입력해주세요");
		scanf_s("%1lf",&num2);
		num2 = (num2 - 32)/1.8;
		printf("이는 섭씨 온도로 %f도입니다.\n", num2);
	}
	else if (num1 == 2) {
		printf("섭씨 온도를 입력해주세요");
		scanf_s("%1lf",&num2);
		num2 = (num2*1.8) + 32;
		printf("이는 화씨 온도로 %f도입니다.\n", num2);
	}

	return 0;
}