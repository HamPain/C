#include <stdio.h>

int main (){
	int num1 = 0;
	int num2 = 0;
	int num3 = 1;

	printf("원하는 단을 입력하세디요");
	scanf_s("%d", &num1);//3단
	for (int i = 9; i >=1; i--){

		printf("%d*%d=%d\n",num1,i,num1*i);
		
	}

	return 0;

}