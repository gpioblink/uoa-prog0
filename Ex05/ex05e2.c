#include<stdio.h>

int main(){
  double judge, sum=0;
  while(1){
    printf("数字を入力してください　：　");
    scanf("%lf", &judge);
    sum += judge;
    printf("合計 %.6lf\n",sum);
    
    if((((int)sum/10)%10)%3 == 0 && (((int)sum/10)%10) != 0){
      printf("条件成立！\n");
      break;
    }
  }
  return 0;
}
