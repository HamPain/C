#include <stdio.h>

int main (){
	int num1 = 0;
	int num2 = 0;
	int num3 = 1;

	printf("���ϴ� ���� �Է��ϼ����");
	scanf_s("%d", &num1);//3��
	for (int i = 9; i >=1; i--){

		printf("%d*%d=%d\n",num1,i,num1*i);
		
	}

	return 0;

}