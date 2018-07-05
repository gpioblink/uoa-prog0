#include<stdio.h>

int main(){
  int n,i,sum=1;
  printf("階乗を計算したい数を入力してください：");
  scanf("%d", &n);
  if(n>=13 || n<0) {
    printf("計算できません\n");
  }else{
    for(i=1; i<=n; i++){
      sum *= i;
    }
    printf("%d\n", sum);
  }
  return 0;
}
