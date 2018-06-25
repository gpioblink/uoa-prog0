#include<stdio.h>

int main(){
  const double nenri = 0.15;
  int kariire = 200000;
  int pmo,count = 0, hensai=0;
  
  printf("毎月の返済額を入力してください： ");
  scanf("%d", &pmo);
  printf("%d円を定額リボ払いで月%d円ずつ返済します。\n");

  while(kariire != 0){
    kariire = kariire*(1+nenri/12);
    if(kariire-pmo < 0) pmo = kariire;
    hensai += pmo;  
    printf("%dヶ月：\t金利手数料込残金：\t%-d円\t支払後残金：\t%-d円\t返済総額：\t%-d円", count, kariire, kariire-pmo, hensai);
    if()
  }
  
}
