#include<stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{

    srand( time ( NULL ) ) ;
    int R = 0 ;
    int RAND[10] = {} ;   //配列の宣言
    for( int i = 0 ; i <= 10 ; i++ ) 
    {

        R = rand() % 100 + 1 ; /* 1 〜 100 のランダムな数値 */
        RAND[i] = R ;
        R = 0 ;

    }
  /* 出力 */
    for( int i = 0 ; i <= 9 ; i++ ) 
    {

        printf( "%d\n", RAND[i] ) ;

    }

    return 0 ;
    
}