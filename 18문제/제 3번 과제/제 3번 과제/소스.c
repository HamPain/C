#include <stdio.h>
int main() {
	int i = 0;
	int num1 = 0;

	do {
		i++;
		if (i % 2 == 0) {
			num1 = num1 + i;
		}


	} while (i <= 100);
		
	printf("%d\n", num1);
		

	return 0;
}