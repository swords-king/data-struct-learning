#include "globel-data-struct.h"


//简单的交换算法  还算不上冒泡  本质上不属于两两交换+

/**
 * @brief 简单的交换算法
 *
 * 使用简单的交换算法对给定的顺序表进行排序。
 * 从第一个元素开始，将后面的元素依次与它比较，如果比它小，则交换位置，直到结束
 *
 * @param L 顺序表指针
 */
void BubbleSort0(SqList *L) {
    int i, j;
    for (i = 0;i < L->length; i++){

        for (j = i+1; j < L->length; j++) {
            if(L->r[j] < L->r[i]) {
                swap(L, j, i);
            }
        }

    }
}

/**
 * @brief 主函数
 *
 * 这是一个简单的 C++ 程序的主函数，用于演示冒泡排序算法。
 *
 * @return 0 程序执行成功
 */
int main() {
    SqList L;

    initList(L);

    printList(L);
    // 调用BubbleSort0函数对顺序表L进行冒泡排序
    BubbleSort0(&L);

    printList(L);

    return 0;
}