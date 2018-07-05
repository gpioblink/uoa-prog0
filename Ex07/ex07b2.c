#include<stdio.h>

int main(){
  int s[7];
  printf("7人分の評点を入力して下さい。\n");
  for(int i=0; i<7; i++){
    scanf("%d",&s[i]);
  }
  for(int i=0; i<7; i++){
    printf("%d: %-3d ", i,s[i]);
    if(s[i]>=80){
      printf("A");
    }
    if(65<=s[i]&&s[i]<80){
      printf("B");
    }
    if(50<=s[i]&&s[i]<65){
      printf("C");
    }
    if(35<=s[i]&&s[i]<50){
      printf("D");
    }
    if(s[i]<35){
      printf("F");
    }
    printf("\n");
  }
  
  
  return 0;
}
