#include<stdio.h>

int main(){
  int a,d,n;
  printf("Enter a1 d n -> ");
  scanf("%d%d%d",&a,&d,&n);
  printf("an = %d\n", a+(n-1)*d);
  printf("Sn = %d\n", n*(2*a+(n-1)*d)/2);
  
  
}
