#include<stdio.h>

int main(){
  int y;
  printf("西暦4桁を入力してください(例：2020) >");
  scanf("%d", &y);

  printf("十干は「");
  switch(y%10){
  case 1: printf("辛」\n");break;
  case 2: printf("壬」\n");break;
  case 3: printf("癸」\n");break;
  case 4: printf("甲」\n");break;
  case 5: printf("乙」\n");break;
  case 6: printf("丙」\n");break;
  case 7: printf("丁」\n");break;
  case 8: printf("戊」\n");break;
  case 9: printf("己」\n");break;
  case 0: printf("庚」\n");break;       
  }

  printf("十二支は「");
  switch(y%12){
  case 0: printf("申」\n");break;
  case 1: printf("酉」\n");break;
  case 2: printf("戌」\n");break;
  case 3: printf("亥」\n");break;
  case 4: printf("子」\n");break;
  case 5: printf("丑」\n");break;
  case 6: printf("寅」\n");break;
  case 7: printf("卯」\n");break;
  case 8: printf("辰」\n");break;
  case 9: printf("巳」\n");break;
  case 10: printf("午」\n");break;
  case 11: printf("未」\n");break;
  }
  
  return 0;
}
