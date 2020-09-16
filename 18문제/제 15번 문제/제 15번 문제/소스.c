#include <stdio.h>
int main() {
	int arr[5];
	int *ptr = arr;
	int a = 5;
	int num2 = 0;
	for (int i = 0; i < a; i++)
	{
		scanf_s("%d",&arr[i]);
	}
	for (int i = 0; i < a; i++)
	{
		*ptr += arr[i];
		
	}
	printf("%d\n", *ptr-1);
	

	return 0;
}