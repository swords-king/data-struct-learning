#include "globel-data-struct.h"

/**
 * @brief 选择排序
 *
 * 对给定的顺序表 L 进行选择排序。
 * 与简单交换算法类似，都是从第一个元素开始，依次跟后面的元素比较；然后简单交换算法每次比较完都要根据条件进行交换，
 * 而简单选择算法则在比较过程中记录最小值，全部比较完后只将最小值和该次比较的起始元素交换一次。
 *
 * @param L 顺序表引用
 */
void SelectSort(SqList &L) {

    for (int i = 0; i < L.length; i++)  {
        int min = i;
        for (int j = i + 1; j < L.length; j++) {
            if (L.r[min] > L.r[j]) {
                min = j;
            }
        }

        swap(&L, min, i);
    }

}

int main() {
    SqList L;
    initList(L);
    printList(L);
    SelectSort(L);
    printList(L);
 }