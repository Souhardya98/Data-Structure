#include<bits/stdc++.h>
using namespace std;
int a[200][200], dist[200], visited[100];

void bfs(int n, int node)
{
    queue <int> Q;
    Q.push(n);
    visited[n] = 1;
    while(! Q.empty())
    {
        n = Q.front();
        Q.pop();
        cout<<n<<endl;
        for(int i=0; i<node; i++)
        {
            if(a[n][i]==1 && visited[i]==0)
            {
                visited[i] =1 ;
                Q.push(i);
                dist[i]=dist[n]+1;
            }
        }
    }
}
int main()
{
    int i,j,edge,from,to,node;
    cin>>node>>edge;
    for(i= 0; i< edge; i++)
    {
        cin>>from>>to;
        a[from][to]=1;
        a[to][from]=1;
    }
    bfs(0, node);
    for(i=0; i< node; i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}

