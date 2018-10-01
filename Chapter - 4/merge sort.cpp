#include<stdio.h>
#include<stdlib.h>

void marge(int *A,int *L,int left,int *R,int right)
{
    int i=0,j=0,k=0;

    while(i<left && j<right)
    {
        if(L[i]<R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<left)
    {
        A[k]=L[i];
        k++;
        i++;
    }
    while(j<right)
    {
        A[k]=R[j];
        k++;
        j++;
    }
}

void mergesort(int *A, int n)
{
    if(n<2) return;

    int mid = n/2;
    int *L,*R;
    L =(int*) malloc(mid*sizeof(int));
    R =(int*) malloc((n-mid)*sizeof(int));

    for(int i=0;i<mid;i++) L[i]=A[i];

    for(int i=mid;i<n;i++) R[i-mid]=A[i];

    mergesort(L, mid);
    mergesort(R,n-mid);
    marge(A,L,mid,R,n-mid);
    free(L);
    free(R);
}
int main()
{
    int A[]={10,5,3,4,8,9,7,6,1};

    int numofelements = sizeof(A)/sizeof(A[0]);

    mergesort(A, numofelements);

    for(int i=0;i<numofelements;i++)
        printf("%d ",A[i]);
}
