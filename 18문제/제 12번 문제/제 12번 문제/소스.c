#include <stdio.h>
int main(){
 char ch1 [100];
 char ch = 0;

 

     printf("���ڿ��� �Է����ּ��� : ");
     scanf_s("%s", ch1, 100);
     for (int i = 0; ch1[i] != '\0'; i++){
          if (ch < ch1[i])
               ch = ch1[i];
     }
	 printf("���� ū ���� : %c\n", ch);

 

     return 0;
}



