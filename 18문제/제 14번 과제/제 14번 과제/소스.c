#include <stdio.h>
int main() {
	int arr[5];
	int *ptr = arr;
	int a = 5;
	for (int i = 0; i < a; i++)
	{
		scanf_s("%d",&arr[i]);
		
	}


	for (int i = 0; i < a; i++)
	{
		arr[i] += 2;
		printf("%d\n", *(ptr++));
	}
	return 0;
}