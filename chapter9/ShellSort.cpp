#include "globel-data-struct.h"


/**
 * @brief 希尔排序
 *
 * 使用希尔排序算法对给定的顺序表进行排序。
 * 与直接插入算法相比，在外层嵌套一个循环，按照步长有大到小分成一个个子序列进行直接排序。
 * 所以在代码上，直接插入算法有步长为1编程了步长为step，然后step逐渐递减到1。
 * 当步长为1时，就是直接插入排序。所以最差的复杂度为O(n^2)。
 *
 * @param L 顺序表引用
 */
void ShellSort(SqList &L)
{
    int i, j, step;
    int temp;
    for (step = L.length / 2; step >= 1; step /= 2)
    {
        for (i = step; i<L.length; i++)
        {
            if (L.r[i] < L.r[i - step]) 
            {
                temp = L.r[i];
                for (j = i - step; j >= 0 && temp < L.r[j]; j -= step) 
                {
                    L.r[j + step] = L.r[j];    
                }
                L.r[j+step] = temp;
            }
        }
        //printList(L);

    }
}

int main()
{
    SqList L;
    initList(L);
    printList(L);
    ShellSort(L);
    printList(L);
    return 0;
}