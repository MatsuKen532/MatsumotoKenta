#include<stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX=100;
void RANDOM(int temp[MAX]){
    for(int i=0;i<MAX;++i){
        int R = rand() % 100+ 1; /* 1 〜 100 のランダムな数値 */
         temp[i]= R;
        R=0; 
    }
}

int binarySearch(int target,int temp[MAX]){
    int left = 0;
    int right = MAX - 1;
    int middle;
    
    while(left + 1 != right){
        middle = (left + right) / 2;
        if(temp[middle] == target){
            return middle + 1;
        }else if(target < temp[middle]){
            right = middle;
        }else{
            left = middle;
        }
    }
    if(temp[left] == target){
        return left +1;
    }else if(temp[right] == target){
        return right + 1;
    }
    return -1;
}
int main()
{
  srand(time(NULL));
   int RAND[100] = {};   //配列の宣言
   RANDOM(RAND);
int i,j;
int tmp;
for(i=0;i<100;i++)
{
    for(j=i+1;j<100;j++)
    {
        if(RAND[i]>RAND[j])
        {
            tmp=RAND[i];
            RAND[i]=RAND[j];
            RAND[j]=tmp;
        }
    }
}
            //printf("%d,", RAND[i]);
  /* 出力 */
  printf("%d\n", binarySearch(50,RAND));
    return 0;
}