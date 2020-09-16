#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 1;
	printf("몇번째까지 출력하시겠습니까??");
	scanf_s("%d", &num1);
	for (int i = 0; i < num1; i++)
	{
		printf("%d",num2);
		num3 = num2 + num4;
		num2 = num4;
		num4 = num3;


	}


	return 0;
}