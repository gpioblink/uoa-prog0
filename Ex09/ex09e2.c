#include <stdio.h>
#define NUM 3

int main()
{
  int map[NUM][NUM];
  int i, j, m, n;
  int flag = 0;

  /* 配列の初期化 */
  for (i=0; i<NUM; i++)
    for (j=0; j<NUM; j++)
      map[i][j] = 0;

  while (1) {
  /* 盤の表示 */
    for (i=0; i<NUM; i++) {
      for (j=0; j<NUM; j++) {
        if (map[i][j]==1) printf("(%d %d) O", i, j);
        else if (map[i][j]==-1) printf("(%d %d) X", i, j);
        else printf("(%d %d)・", i, j);
      }
      printf("\n");
    }

    /* 座標の入力 */
    if (flag==0) {
      printf("Oの番です\n座標を行・列の順で入力してください：");
      scanf("%d%d", &m, &n);
      if(m>=NUM || n>=NUM || map[m][n]){
	printf("そこには打てません\n");
	continue;
      }
      map[m][n] = 1;
      flag = 1;
    } else {
      printf("Xの番です\n座標を行・列の順で入力してください：");
      scanf("%d%d", &m, &n);
      if(map[m][n]){
	printf("そこには打てません\n");
	continue;
      }
      map[m][n] = -1;
      flag = 0;
    }

    /* 勝者の判定 */

  }
  
  return 0;
}
