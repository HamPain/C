#include <stdio.h>
collbyvalue(int num1){
return num1 * num1;
}


int main() {
	int num1 = 2;
	collbyvalue(num1)*collbyvalue(num1);

	printf("%d",num1);

	return 0;
}


