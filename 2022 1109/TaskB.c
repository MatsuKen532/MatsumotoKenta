#include<stdio.h>
#include <stdlib.h>
#include <time.h>



void RANDOM( int temp[100] )
{

    for( int i = 0 ; i < 100 ; ++i ) 

    {
        int R = rand() % 1000 + 1 ; /* 1 〜 100 のランダムな数値 */
        temp[i] = R ;
        R = 0 ; 
    }

}
int main()
{

   srand( time ( NULL ) ) ;
   int RAND[100] = {} ;   //配列の宣言
   int Rand[100] = {} ;   //配列の宣言
   RANDOM(RAND) ;
   RANDOM(Rand) ;
   int i , j ;
   int tmp ;
   for( i = 0 ; i < 100 ; i++ )
   {

    for( j = i + 1 ; j < 100 ; j++ )
    {

        if( RAND[i] > RAND[j] )

        {

            tmp = RAND[i] ;
            RAND[i] = RAND[j] ;
            RAND[j] = tmp ;

        }

    }

   }

for( i = 0 ; i < 100 ; i++ )
{

    for( j = i + 1 ; j < 100 ; j++ )
    {

        if( Rand[i] < Rand[j] )
        {

            tmp = Rand[i] ;
            Rand[i] = Rand[j] ;
            Rand[j] = tmp ;

        }

    }

}

  /* 出力 */

      for( int i = 0 ; i <= 100 ; i++ ) 
    { 
        printf( "%d \n" , RAND[i] ) ;
    }
      for( int i = 0 ; i <= 100 ; i++ ) 
    {
    printf( "%d \n" , Rand[i] ) ;
    }

    return 0 ;

}

