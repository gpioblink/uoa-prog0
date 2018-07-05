#include <stdio.h>
int main()
{
  int n, cnt = 1;
  printf("0でない自然数nを入力\n");
  scanf("%d", &n);
  
  while ( n != 1 ) {
    printf("%d回目\n",cnt);
    if(n%2){
      printf("%dは奇数\n",n);
      n = n*3 + 1;
    }else{
      printf("%dは偶数\n",n);
      n /= 2;
    }
    printf("次の n = %d\n\n", n);
    cnt++;
  }

  printf("%d回目でn = %d になりました\n", cnt-1, n);
  return 0;   
}
