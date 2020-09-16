#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	int num = 0;
	
	int i = 0;

	printf("배수출력");
	printf("원하시는 정수");//3
	scanf_s("%d", &num1);//3
	printf("몇배수");//3배수
	scanf_s("%d", &num2);
	
	
	for (int i = num2; i>=1; i--){
		printf("%d\n", i*num1);//num1 값을 출력

	
	}
	return 0;
}