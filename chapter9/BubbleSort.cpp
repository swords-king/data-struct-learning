#include "globel-data-struct.h"

/**
 * @brief 冒泡排序
 *
 * 使用冒泡排序算法对给定的顺序表进行排序。
 * 本算法是从小到大排序，所以在内层循环中需要从后往前遍历，将最小的值放在前面。
 * 或者从前往后遍历，将最大的值放在后面。
 *
 * @param L 顺序表引用
 */
void BubbleSort(SqList &L) {
    int i, j;

    for ( i = 0; i < L.length; i++)
    {
        for (j = L.length - 1; j >= i + 1 ; j--) {
            if (L.r[j] < L.r[j-1]) {
                swap(&L, j, j-1);
            }
        }
    }
    
}

int main() {
    SqList L;
    
    initList(L);

    printList(L);

    BubbleSort(L);

    printList(L);

    return 0;
 }