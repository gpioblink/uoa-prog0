#include<stdio.h>

int main(){
  int n,i,j;
  printf("1から9までの整数を入力してください：");
  scanf("%d", &n);
  if(n<1 || 9<n){
    printf("入力する数は１から９までです\n");
  }else{
    for(i=1; i<=n; i++){
      for(j=0; j<i; j++){
	printf("%d",i);
      }
      printf("\n");
    }
    for(i=n-1; 0<i; i--){
      for(j=0; j<i; j++){
	printf("%d",i);
      }
      printf("\n");
    }
  }
}
