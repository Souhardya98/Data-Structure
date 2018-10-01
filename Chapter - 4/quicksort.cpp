#include<bits/stdc++.h>
using namespace std;

int Partition(int *A, int start, int en)
{
    int pivot= A[en];
    int partionIndex= start;
    for(int i=start; i<en; i++)
    {
        if(A[i]<pivot)
        {
            swap(A[i], A[partionIndex]);
            partionIndex++;
        }
    }
    swap(A[partionIndex], A[en]);
    return partionIndex;
}

void quickSort(int *A, int start,int  en)
{
    if(start<en)
    {
        int partionIndex= Partition(A, start, en);
        quickSort(A, start, partionIndex-1);
        quickSort(A, partionIndex+1, en);
    }
}

int main()
{
    int arr[]={0,5,6,7,3,1,4,9,8};
    quickSort(arr,0,8);
    for(int i=0; i<9; i++)
            cout<<arr[i]<<"\t";
    cout<<endl;
}
