#include <stdio.h>

int main () {

  int input;
  int count = 0;

  while( 1 ){
    /* この部分に必要なプログラムを補う */
    printf("偶数は%d回入力されています。正の整数を入力して下さい。\n", count);
    scanf("%d",&input);
    if(!(input%2)){
      count++;
      if(count == 2) break; 
    }
  }

  printf("2回偶数が入力されました．プログラムを終了します．\n");
  return 0;
}
