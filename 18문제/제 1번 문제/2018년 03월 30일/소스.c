#include <stdio.h>
int main (){
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	printf("정수를 5개 입력해주세요");

	while (1) {
		
		scanf_s("%d", &num1);
		scanf_s("%d", &num2);
		scanf_s("%d", &num3);
		scanf_s("%d", &num4);
		scanf_s("%d", &num5);
		if (num1 == 0) {
			continue;
			pritnf("다시 골라주십시요");
		}
		else if (num2 == 0) {
			continue;
			pritnf("다시 골라주십시요");
		}
		else if (num3 == 0) {
			continue;
			pritnf("다시 골라주십시요");
		}
		else if (num4 == 0) {
			continue;
			pritnf("다시 골라주십시요");
		}
		else if (num5 == 0) {
			continue;
			pritnf("다시 골라주십시요");
		}
		break;
	}
	num6 = num1 + num2 + num3 + num4 + num5;
	printf("%d", num6);
	return 0; 
}