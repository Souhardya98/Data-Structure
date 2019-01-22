//#include<bits/stdc++.h>
//using namespace std;
//int dist[100];
//void bfs( vector <int > graph[], int node, int n)
//{
//    int visited[node];
//    memset(visited, false, node);
//    memset(dist, 0, node);
//    queue <int > Q;
//    Q.push(n);
//    visited[n]=true;
//    while(!Q.empty())
//    {
//        n = Q.front();
//        Q.pop();
//        cout<<"  ********  "<<n<<endl;
//        for(int j=0; j<graph[n].size(); j++)
//        {
//            int now = graph[n][j];
//            if(visited [now]== false)
//            {
//                visited[now]=true;
//                Q.push(now);
//                dist[now]= dist[n]+1;
//                cout<<"  ********  "<<now<<endl;
//            }
//        }
//    }
//
//}
//
//int main()
//{
//    int from, to, node, edge, i;
//    cin>>node>>edge;
//    vector < int > graph[node];
//    for(i=0; i<edge; i++)
//    {
//        cin>>from>>to;
//        graph[from].push_back(to);
//        graph[to].push_back(from);
//    }
//    bfs(graph, node, 0);
//    for(i=0; i<node; i++)
//        cout<<dist[i]<<endl;
//}





#include<bits/stdc++.h>
using namespace std;
int a[200][200], dist[200], visited[100];

void bfs(int n, int node)
{
    queue <int> Q;
    Q.push(n);
    visited[n] = 1;
    while(!Q.empty())
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
    cout<<"distance from 0 vertex to all other vertex:\n";
    for(i=0; i< node; i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}


