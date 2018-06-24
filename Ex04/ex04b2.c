/* 奇数、偶数、５の倍数を判別するプログラム */
/* 作成者： s1260250 */
/* 作成日： 2018年6月21日 */
#include <stdio.h>
int main()
{
  int a;

  printf("整数を入力してください ");
  scanf("%d", &a);

  printf("方法１：");  /* 多岐選択 */
  if( a%5 == 0 && a%2 == 0 ) printf( "%dは偶数で、5の倍数である\n", a );
  else if( a%5 == 0 && a%2 == 1 ) printf( "%dは奇数で、5の倍数である\n", a );
  else if( a%5 != 0 && a%2 == 0 ) printf( "%dは偶数で、5の倍数ではない\n", a );
  else if( a%5 != 0 && a%2 == 1 ) printf( "%dは奇数で、5の倍数ではない\n", a );
 
  printf("方法２：");  /* 双岐選択 */
  /* printf で出力される行数は改行文字でコントロールできるので、
     一つの printf が１行に対応するとは限らないことに注意 */
  if( a%2 ) printf( "%dは奇数で、" , a);
  else printf( "%dは偶数で、" , a);
  if( a%5 ) printf( "5の倍数ではない\n" );
  else printf( "5の倍数である\n" );
 
  printf("方法３：");  /* 入れ子の双岐選択 */
  if( a%2 ) {
    if( a%5 ) {
      printf( "%dは奇数で、5の倍数ではない\n", a);
    }
    else printf( "%dは奇数で、5の倍数である\n",a);
  } 
  else{
    if( a%5 ) {
      printf( "%dは偶数で、5の倍数ではない\n", a);
    }
    else printf( "%dは偶数で、5の倍数である\n", a);
  } 

  return 0;
}
