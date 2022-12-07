#include<stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 10;

int search(int targetIndex , int arr[])
{   

    if(arr[targetIndex] == 5)
    {
        return targetIndex; 
    }
    else
    {
        int nextTargetIndex = targetIndex + 1;
        printf("NoTarget\n");
        return search(nextTargetIndex, arr);
    }
}


int main()
{
    srand(time(NULL));
    int r = 0;
    int array[10] = {};   //配列の宣言
    for(int i = 0; i <=10; i++) 
    {
        array[i] = i;
    }
    
    for (int i = 0; i < 10; i++) 
    {
         r = rand() % 10;
        int tmp = array[i];
        array[i] = array[r];
        array[r] = tmp;
        r = 0;
    }

    printf("%d" , search(0 , ZERO_TO_TEN));

    return 0;
}