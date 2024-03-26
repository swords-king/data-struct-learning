#include "globel-data-struct.h"

int Partiotion(SqList &L, int low, int high) 
{
    if (low >= high)
        return low;
    
    int pivot = L.r[low];

    while (low < high) {
        while (low < high && L.r[high] >= pivot) 
        {
            high--;
        } 
        L.r[low] = L.r[high];
        while (low < high && L.r[low] <= pivot) 
        {
            low++;
        }
        L.r[high] = L.r[low];
    }

    L.r[low] = pivot;
    
}

void QuickSort(SqList &L, int low, int high) 
{
    if (low >= high)
        return;
    int pivot = Partiotion(L, low, high);
    QuickSort(L, low, pivot - 1);
    QuickSort(L, pivot + 1, high);
}

int main()
{
    SqList L;
    initList(L);
    printList(L);
    QuickSort(L, 0, L.length - 1);
    printList(L);
}