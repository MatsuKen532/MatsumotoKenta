#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int i;
  int target;        //検索する点数
  int end = 0;        //ループの終了条件の変数
    srand(time(NULL));
    int r = 0;
    int array[10] = {};   //配列の宣言
    for(int i = 0; i < 10; i++) 
    {
        array[i] = i;
    }
    for (int i = 0; i < 10; i++) {
         r = rand() % 10;
        int tmp = array[i];
        array[i] = array[r];
        array[r] = tmp;
        r=0;
    }
  /* 出力 */
   for(i = 0; i <=11; i++)  
  {
    if(array[i] == 5)     //検索する点数を見つけたら
    {
      //iは0から始まるので1を足す(0→1位)
      printf("%d" , i);
      end = 1;  //フラグを立てる
      break;
    }
  }

  if(end == 0)  //フラグが立っていない＝検索に一致する点数なし
  {
    printf("NO\n");
    return -1;      //エラーの場合はｰ1を返す。(ここでmain関数終了)
  }
    return 0;
}