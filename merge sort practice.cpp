#include<bits/stdc++.h>

using namespace std;

void merge_(int *A, int *L, int right, int *R, int left)
{
    int i=0, j=0, k=0;

    while(i<right && j< left)
    {
        if(L[i]<R[j])
        {
            A[k] = L[i];
            i++;
            k++;
        }
        else
        {
            A[k] = R[j];
            j++;
            k++;
        }
    }

    while(i<right)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while(j<left)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int *A, int num)
{
    if(num<2) return;

    int mid = num/2;
    int *L,*R;
    L = (int*) malloc(mid * sizeof(int));
    R = (int*) malloc((num-mid) * sizeof(int));

    for(int i=0; i<mid; i++) L[i]= A[i];
    for(int j=mid; j<num; j++) R[j-mid]= A[j];

    merge_sort(L, mid);
    merge_sort(R, num-mid);
    merge_(A, L, mid, R, num-mid);
    free(L);
    free(R);
}

int main()
{
    int A[]= {12,5,8,7,6,32,45,0,9};

    int num = sizeof(A)/sizeof(A[0]);

    merge_sort(A, num);

    for(int i=0; i<num; i++)
        cout<<A[i]<<'\t';
}
