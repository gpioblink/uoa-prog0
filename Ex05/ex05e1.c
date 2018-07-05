#include<stdio.h>

int main(){
  const double nenri = 0.15;
  int kariire = 200000;
  int pmo,count = 1, hensai=0;
  
  printf("毎月の返済額を入力してください： ");
  scanf("%d", &pmo);
  printf("%d円を定額リボ払いで月%d円ずつ返済します。\n",kariire, pmo);

  while(kariire != 0){
    kariire = (int)((double)kariire*(1+nenri/12));
    if(kariire-pmo < 0) pmo = kariire;
    hensai += pmo;  
    printf("%2dヶ月：金利手数料込残金：%8d円 支払後残金：%8d円 返済総額：%8d円\n", count, kariire, kariire-pmo, hensai);
    kariire = kariire-pmo;
    if(pmo == kariire) break;
    count++;
  }
  printf("返済期間 %dヶ月　総返済額:%d円\n",count, hensai);
}
