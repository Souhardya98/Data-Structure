#include<stdio.h>
int main()
{
    int a[100],i,j,temp,n;
    printf("How many number are you going to insert: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(j=0;j<n-1;j++)
        for(i=0;i<n-j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    for(j=0;j<5;j++)
    printf("%d\t",a[j]);
}
