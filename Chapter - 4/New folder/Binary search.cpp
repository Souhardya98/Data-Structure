#include<bits/stdc++.h>

using namespace std;

int main()
{
    int bs[13]={11 ,22 ,30 ,33 ,40 ,44 ,55 ,60 ,66 ,77 ,80 ,88 ,99};
    int k,s,e,m;

    s=0,e=sizeof(bs);

    for(int i=0;i<13;i++)
        cout<<bs[i]<<"\t";
    cout<<endl;

    cout<<"Enter the number you want to search -"<<endl;

    cin>>k;

    do
    {
        m=(int)(s+e)/2;
        if(bs[m]==k)
        {
            cout<<"found\n";
            cout<<e;
            break;
        }

        else if(bs[m]>k) e=m-1;

        else if(bs[m]<k) s=m+1;

    }while(s<=e);

    if(s>e) cout<<"not found";

    return 0;
}

