#include <stdio.h>
#define ROW 5
#define COLUMN 2

int main(){
  int input[ROW][COLUMN],maxv=-2147483648,maxr,mayv=-2147483648,mayr;
  for(int i=0; i<ROW; i++){
    printf("点%dの座標を整数値で入力してください ", i+1);
    for(int j=0; j<COLUMN; j++){
      scanf("%d",&input[i][j]);
      if(j == 0 && maxv<= input[i][j]){
	maxv = input[i][j];
	maxr = i;
      }else if(j == 1 && mayv<= input[i][j]){
	mayv = input[i][j];
	mayr = i;
      }
    }
  }
  printf("X座標が最大となる点は点%d(%d,%d)です\n", maxr+1, input[maxr][0], input[maxr][1]);
  printf("Y座標が最大となる点は点%d(%d,%d)です\n", mayr+1, input[mayr][0], input[mayr][1]);
  return 0;
}
