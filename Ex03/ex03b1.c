#include <stdio.h>
int main()
{
  double h,w;

  printf("三角形の底辺の長さと高さをcmで入力してください : ");
  scanf("%lf%lf", &h, &w);

  printf("三角形の面積は %f 平方cmです\n", h*w/2 );

  return 0;  
}
