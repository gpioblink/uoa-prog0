#include<stdio.h>
#define ROW 3
#define COLUMN 4
int main(){
  int mat[ROW][COLUMN],sumr,sumt=0;
  printf("Input %d x %d data\n",ROW,COLUMN);
  for(int i=0;i<ROW; i++){
    for(int j=0; j<COLUMN; j++){
      scanf("%d",&mat[i][j]);
    }
  }
  printf("\n Data and average:\n");
  for(int i=0;i<ROW; i++){
    sumr=0;
    for(int j=0; j<COLUMN; j++){
      printf("%5d ",mat[i][j]);
      sumr+=mat[i][j];
    }
    sumt+=sumr;
    printf("%5.2lf \n", (double)sumr/COLUMN);
  }
  for(int i=0;i<COLUMN; i++){
    sumr=0;
    for(int j=0; j<ROW; j++){
      sumr+=mat[j][i];
    }
    printf("%5.2lf ", (double)sumr/ROW);
  }
  printf("%5.2lf \n", (double)sumt/(COLUMN*ROW));
}
