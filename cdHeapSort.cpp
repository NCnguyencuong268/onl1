//Nguon tham khao: https://vimentor.com/en/lesson/sap-xep-heap-sort

#include <iostream>
using namespace std;
void max_heap_sort(int A[ ])
{
    int heap_size = N;
    run_maxheap(A);
    for(int i = N; i>=2 ; i-- )
    {
        swap(A[ 1 ], A[ i ]);
        max_heap(A, 1, --heap_size);
    }
}
