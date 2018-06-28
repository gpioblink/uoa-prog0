#include<stdio.h>

int main(){
  int t,oc=0,ec=0;
  int odds[100],evens[100];
  while(scanf("%d", &t)){
    if(t == 0){
      break;
    }else if(t%2){
      odds[oc] = t;
      oc++;
    }else{
      evens[ec] =t;
      ec++;
    }
  }
  if(oc<ec){
    printf("偶数が多い！！\n");
    for(t=0; t<ec; t++) printf(" %3d",evens[t]);
    printf("\n");
  }else if(oc == ec){
    printf("偶数と奇数が同数\n");
    for(t=0; t<oc; t++) printf(" %3d",odds[t]);
    printf("\n");
    for(t=0; t<ec; t++) printf(" %3d",evens[t]);
    printf("\n");
  }else{
    printf("奇数が多い!!\n");
    for(t=0; t<oc; t++) printf(" %3d",odds[t]);
    printf("\n");
  }
}
