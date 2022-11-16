#include <stdio.h>

/* 管理するデータの上限個数 */
#define MAX_NUM 10

/* スタック構造体 */
typedef struct STACK {
    /* データの最後尾 */
    int tail;
    /* スタックされているデータ */
    int data[MAX_NUM];
} STACK_T;

void initStack(STACK_T*);
void printStack(STACK_T*);
void push(STACK_T*, int);
int pop(STACK_T*);

/* スタックを初期化する関数 */
void initStack(STACK_T *stack){

    /* スタックを空に設定 */
    stack->tail = -1;
}

/* PUSHする関数 */
void push(STACK_T *stack, int input){

    /* スタックが満杯なら何もせず関数終了 */
    if(stack->tail >= MAX_NUM - 1){
        printf("スタックが満杯でPUSHできません\n");
        return;
    }

    /* データをデータの最後尾の１つ後ろに格納 */
    stack->data[stack->tail + 1] = input;

    /* データの最後尾を１つ後ろに移動 */
    stack->tail = stack->tail + 1;
}

/* POPする関数 */
int pop(STACK_T *stack){
    int ret = 0;

    /* スタックが空なら何もせずに関数終了 */
    if(stack->tail == -1){
        printf("スタックが空です\n");
        return -1;
    }

    /* データの最後尾からデータを取得 */
    ret = stack->data[stack->tail];

    /* データの最後尾を１つ前にずらす */
    stack->tail = stack->tail - 1;

    /* 取得したデータを返却 */
    return ret;
}

/* スタックの中身を表示 */
void printStack(STACK_T *stack){
    int i = 0;

    printf("左側がスタックの上側を表しています\n");
    for(i = 0; i <= stack->tail; i++){
        printf("%d,", stack->data[stack->tail - i]);
    }
    printf("\n");
}

int main(void){
    int input;
    int output;
    STACK_T stack;

    /* スタックを初期化 */
    initStack(&stack);            
    printf("PUSHする数1を入力してください");
    scanf("%d", &input);
    if (input ==1) {
        printf("%dをPUSHします\n", input);
        printStack(&stack);
    }
    else{
    printf("1を入力して下さい\n");
    }
 printf("PUSHする数3を入力してください");
    scanf("%d", &input);
    if (input ==3) {
        printf("%dをPUSHします\n", input);
        printStack(&stack);
    }
    else{
    printf("3を入力して下さい\n");
    }
     printf("PUSHする数5を入力してください");
    scanf("%d", &input);
    if (input ==5) {
        printf("%dをPUSHします\n", input);
        printStack(&stack);
    }
    else{
    printf("5を入力して下さい\n");
    }
     printf("PUSHする数7を入力してください");
    scanf("%d", &input);
    if (input ==7) {
        printf("%dをPUSHします\n", input);
        printStack(&stack);
    }
    else{
    printf("7を入力して下さい\n");
    }
     printf("PUSHする数9を入力してください");
    scanf("%d", &input);
    if (input ==9) {
        printf("%dをPUSHします\n", input);
        printStack(&stack);
    }
    else{
    printf("9を入力して下さい\n");
    }
    push(&stack, input);
    printStack(&stack);
    printf("POPします\n");
            output = pop(&stack);
            if(output != -1){
                printf("%dをPOPしました\n", output);
            }
    return 0;
}