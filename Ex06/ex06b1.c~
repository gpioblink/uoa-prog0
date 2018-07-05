#include<stdio.h>

int main(){
  int n,cnt;
  printf("正の整数を入力してください：");
  scanf("%d", &n);
  if(n<=0) printf("入力が正の整数ではありません\n");
  else{
    for(cnt=0;n!=1;cnt++){
      if(n%2 == 1) n = n*3 + 1;
      else n = n/2;
    }
    printf("%d\n",cnt);
  }
  
  return 0;
}
