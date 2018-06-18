#include <stdio.h>
int main()
{
  int i=1, j=2, k=3, q=4, r=5; /* これらの変数初期化の値は解答に影響を及ぼさない */
  
  r = i + j;
  r = i*j-k;
  r = i*(j-k);
  //r = (i + (j-k);
  j = j - 1;
  //i + j = r;
  i + j;
  r = (j*i) % (i-j) / k;
  q = r = i + j;
  q = i**k;
  return 0;
}
