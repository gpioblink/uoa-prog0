#include<stdio.h>

int main(){
  int m,n;
  printf("整数 m, n を入力してください : ");
  scanf("%d%d",&m,&n);
  printf("%d を %d でわった余りは %d です。\n",m,n,m-((m/n)*n));
  return 0;
}
