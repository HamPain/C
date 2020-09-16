#include <stdio.h>
int main(){
 char ch1 [100];
 char ch = 0;

 

     printf("문자열을 입력해주세요 : ");
     scanf_s("%s", ch1, 100);
     for (int i = 0; ch1[i] != '\0'; i++){
          if (ch < ch1[i])
               ch = ch1[i];
     }
	 printf("가장 큰 문자 : %c\n", ch);

 

     return 0;
}



