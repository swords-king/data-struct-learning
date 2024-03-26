#include "globel-data-struct.h"

/**
 * @brief 插入排序
 *
 * 对给定的顺序表 L 进行插入排序。
 *
 * @param L 顺序表引用
 */
void InsertSort(SqList &L) {
    int i, j;
    int temp; //临时保存当前元素
    for (i = 1; i < L.length; i++) {
        if (L.r[i]<L.r[i-1]) {
            temp = L.r[i];
            for (j = i - 1; j >= 0 && temp < L.r[j]; j--) {
                L.r[j + 1] = L.r[j];
            }
            L.r[j+1] = temp;
        }
    }
}

int main () {
    SqList L;
    initList(L);
    printList(L);
    InsertSort(L);
    printList(L);
    return 0;
}
