#include <stdio.h>

/* 管理するデータの上限個数+1 */
#define MAX_NUM (5+1)

/* キュー構造体 */
typedef struct QUEUE {
    /* データの最後尾 */
    int tail;
    /* データの先頭 */
    int head;
    /* キューされているデータ */
    int data[MAX_NUM];
} QUEUE_T;

void initQueue(QUEUE_T*);
void printQueue(QUEUE_T*);
void enqueue(QUEUE_T*, int);
int dequeue(QUEUE_T*);

/* キューを初期化する関数 */
void initQueue(QUEUE_T *queue){

    /* キューを空に設定 */
    queue->head = 0;
    queue->tail = -1;
}

/* ENQUEUEする関数 */
void enqueue(QUEUE_T *queue, int input){

    /* キューが満杯なら何もせず関数終了 */
    if((queue->tail + 2) % MAX_NUM == queue->head){
        printf("Queue is full and cannot be ENQUEUE\n");
        return;
    }

    /* データをデータの最後尾の１つ後ろに格納 */
    queue->data[(queue->tail + 1) % MAX_NUM] = input;

    /* データの最後尾を１つ後ろに移動 */
    queue->tail = (queue->tail + 1) % MAX_NUM;
}

/* DEQUEUEする関数 */
int dequeue(QUEUE_T *queue){
    int ret = 0;

    /* キューが空なら何もせずに関数終了 */
    if((queue->tail + 1) % MAX_NUM == queue->head){
        printf("Queue is empty\n");
        return -1;
    }

    /* データの先頭からデータを取得 */
    ret = queue->data[queue->head];

    /* データの先頭を１つ後ろにずらす */
    queue->head = (queue->head + 1) % MAX_NUM;

    /* 取得したデータを返却 */
    return ret;
}

/* キューの中身を表示 */
void printQueue(QUEUE_T *queue){
    int i = 0;
    int num;

    /* キュー内のデータの個数を計算 */
    if (queue->tail < queue->head) {
        num = queue->tail + MAX_NUM - queue->head + 1;
    } else {
        num = queue->tail - queue->head + 1;
    }

    printf("the left side represents the exit side of the queue\n");
    for(i = 0; i < num; i++){
        /* データの先頭からnum個分のデータを表示 */
        printf("%d,", queue->data[(queue->head + i) % MAX_NUM]);
    }
    printf("\n");
}

int main(void){

    int m;
    int input;
    int output;
    QUEUE_T queue;

    /* キューを初期化 */
    initQueue(&queue);

            printf("ENQUEUE::1\n");
            scanf("%d", &input);
            printf("ENQUEUE %d\n", input);
            enqueue(&queue, input);
            printf("Displays the contents of the queue::");
            printQueue(&queue);
            printf("ENQUEUE::3\n");
            scanf("%d", &input);
            printf("ENQUEUE %d\n", input);
            enqueue(&queue, input);
            printf("Displays the contents of the queue::");
            printQueue(&queue);
            printf("ENQUEUE::5\n");
            scanf("%d", &input);
            printf("ENQUEUE %d\n", input);
            enqueue(&queue, input);
            printf("Displays the contents of the queue::");
            printQueue(&queue);
            printf("ENQUEUE::7\n");
            scanf("%d", &input);
            printf("ENQUEUE %d\n", input);
            enqueue(&queue, input);
            printf("Displays the contents of the queue::");
            printQueue(&queue);
            printf("ENQUEUE::9\n");
            scanf("%d", &input);
            printf("ENQUEUE %d\n", input);
            enqueue(&queue, input);
            printf("Displays the contents of the queue::");
            printQueue(&queue);
            printf("DEQUEUE\n");
            output = dequeue(&queue);
            if(output != -1){
                printf("%d DEQUEUED\n", output);
            }
            printf("Displays the contents of the queue::");
            printQueue(&queue);
            printf("DEQUEUE\n");
            output = dequeue(&queue);
            if(output != -1){
                printf("%d DEQUEUED\n", output);
            }
            printf("Displays the contents of the queue::");
            printQueue(&queue);
    return 0;
}
