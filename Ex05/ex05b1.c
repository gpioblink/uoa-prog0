#include<stdio.h>

int main(){
  int input;

  while(1){
    printf("出席番号を入力して下さい> ");
    scanf("%d",&input);
    if(input <= 0) break;
    input %= 3;
    
    switch(input){
    case 1:
      printf("この人は赤組です\n");
      break;
    case 2:
      printf("この人は白組です\n");
      break;
    case 0:
      printf("この人は青組です\n");
      break;
    }
  }
  printf("プログラムを終了します\n");
}
