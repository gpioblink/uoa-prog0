#include<stdio.h>

int main(){
  int mat[5][5]={{1,1,1,1,1},{0,1,1,1,1},{0,0,1,1,1},{0,0,0,1,1},{0,0,0,0,1}};
  int temp,dir;
  
  printf("反転する方向を指定してください（縦：0、横：1）");
  scanf("%d",&dir);
  switch(dir){
  case 0:
    for(int i=0; i<2; i++){
      for(int j=0; j<5; j++){
	temp = mat[i][j];
	mat[i][j] = mat[4-i][j];
	mat[4-i][j] = temp;
      }
    }
    break;
  case 1:
    for(int i=0; i<5; i++){
      for(int j=0; j<2; j++){
	temp = mat[i][j];
	mat[i][j] = mat[i][4-j];
	mat[i][4-j] = temp;
      }
    }
    break;
  default:
    printf("不適切な数値が入力されました\n");
    break;
  }
  if(dir==0||dir==1){
    for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
	printf("%d ",mat[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}
