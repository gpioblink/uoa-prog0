#include<stdio.h>

int main(){
  int a[3][2],b[2][3];
  printf("3 x 2行列Aを整数値で入力してください\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n2 x 3行列Bを整数値で入力してください\n");
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      scanf("%d", &b[i][j]);
    }
  }

  printf("\n行列の積：\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("%3d ", a[i][0]*b[0][j] + a[i][1]*b[1][j]);
      /*printf("%3d i:%d j:%d a[i][0]:%d b[0][j]:%d  a[i][1]:%d b[1][j]:%d\n", a[i][0]*b[0][j] + a[i][1]*b[1][j],i,j, a[i][0],b[0][j],a[i][1],b[1][j]);*/
    }
    printf("\n");
  }
  
}
