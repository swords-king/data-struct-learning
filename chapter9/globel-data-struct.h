#include <stdio.h>
#include <algorithm>
#include <ctime>
//#include <cstdlib>

#define MAXSIZE 10000

typedef struct {
    int r[MAXSIZE]; //需要被排序的关键值数组
    int length;     //用于记录数据表的长度
} SqList; 

/**
 * @brief 交换顺序表中两个元素的位置
 *
 * 在给定的顺序表 `p` 中，交换第 `i` 个和第 `j` 个元素的位置。
 *
 * @param p 顺序表指针
 * @param i 第 i 个元素的下标
 * @param j 第 j 个元素的下标
 */
static void swap(SqList *L, int i, int j) {
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}

/**
 * @brief 初始化顺序表
 *
 * 将给定的顺序表L的长度初始化为10，并从10开始递减到1，依次给顺序表L的元素赋值。
 *
 * @param L 顺序表引用
 */
static void initList(SqList &L) {
    // 初始化顺序表L的长度为10
    L.length = 20;
    // 依次给顺序表L的元素赋值
    for (int i = L.length; i > 0; i--) {
        L.r[i-1] = L.length - i;
    }

    //使用shuffle函数将顺序表L乱序重排
    std::srand(std::time(NULL));
    std::random_shuffle(&L.r[0], &L.r[L.length]);
}


/**
 * @brief 打印顺序表
 *
 * 打印给定顺序表中的所有元素，使用空格分隔。
 *
 * @param L 顺序表引用
 */
static void printList(SqList &L) {
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.r[i]);
    }

    printf("\n");
}  

