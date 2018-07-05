#include<stdio.h>

int main(){
  int Fibonacci[21];
  Fibonacci[0] = 0;
  Fibonacci[1] = 1;

  for(int i=0; i<21; i++){
    if(i>1){
      Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }
    printf("Fibonacci[%d] = %d\n", i, Fibonacci[i]);
  }
  printf(" \n");
  for(int i=1; i<20; i++){
    printf("Fibonacci[%d]/Fibonacci[%d] - goldenratio = %10.3e\n", i+1, i, ((double)Fibonacci[i+1] / Fibonacci[i]) - 1.6180339887);
  }
  
}
