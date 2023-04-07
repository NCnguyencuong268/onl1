//Nguon tham khao: https://vimentor.com/en/lesson/sap-xep-heap-sort

#include <iostream>
using namespace std;

int N = 6; 
void max_heap(int A[], int i, int heap_size) {
    int largest; 
    int left = 2 * i; 
    int right = 2 * i + 1; 
    if (left <= heap_size and A[left] > A[i]) 
        largest = left;
    else
        largest = i;
    if (right <= heap_size and A[right] > A[largest])
        largest = right;
    if (largest != i) {
        swap(A[i], A[largest]); /
        max_heap(A, largest, heap_size); 
    }
}

void run_maxheap(int A[]) { 
    for (int i = N / 2; i >= 1; i--) {
        max_heap(A, i, N);
    }
}

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

int main() {
    int A[N+1] = {-1,8,4,7,1,3,5}; 
    max_heap_sort(A);
    printf("\n\tGiá tri\n");
    printf("\t");
    for (int i = 0; i < N+1; i++) { 
        printf("%d    ", A[i]);
    }
}
