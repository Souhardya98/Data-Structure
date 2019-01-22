#include<bits/stdc++.h>
using namespace std;

int partion(int *A, int start, int en)
{
    int partionindex = start;
    int pivot = A[en];
    for(int i=start; i<en; i++)
    {
        if(A[i]<pivot)
        {
            swap(A[partionindex],A[i]);
            partionindex++;
        }
    }
    swap(A[en],A[partionindex]);

    return partionindex;
}

void QuickSort(int *A, int start, int en)
{
    if(start<en)
    {
        int partionindex = partion(A, start, en);
        QuickSort(A, start, partionindex-1);
        QuickSort(A, partionindex+1, en);
    }
}
int main()
{
    int A[] = {5,2,4,8,6,3,4,10,12,32,50};
    int n = sizeof(A)/sizeof(A[0]);

    QuickSort(A,0, n-1);

    for(int i=0; i< n; i++)
    {
        cout<<A[i]<<'\t';
    }
}
