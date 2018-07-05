#include<stdio.h>

int main(){
  int y,n,p,i;
  printf("元金、週、利率を入力して下さい：");
  scanf("%d%d%d", &y, &n, &p);

  for(i=0; i<n; i++){
    y = (int)(y*(1+(p*0.01)));
  }
  printf("%d週間後の借金は%d円です\n", n, y);
}
