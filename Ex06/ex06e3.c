#include<stdio.h>

int main(){
  int n,i,j,h,ue,sita;
  printf("nを入力してください：");
  scanf("%d", &n);

  if(n<=0||13<=n){
    printf("nが範囲外です\n");
  }else for(i=1; i<=n; i++){
    printf("[");
    for(j=1; j<=n; j++){
      ue=sita=1;
      for(h=0; h<i; h++){
	ue*=j-h;
	sita*= h+1;
      }
      printf(" %3d",ue/sita);
    }
    printf(" ]\n");
  }
}
