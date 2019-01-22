#include<bits/stdc++.h>
#define sz 100
using namespace std;
bool visited[sz];
vector < int > graph[sz];

dfs(int n)
{
    visited[n] = true;
    cout<<"now visiting : "<<n<<endl;
    for(int i=0; i< graph[n].size(); i++)
    {
        int to = graph[n][i];
        if(visited[to]==false)
            dfs(to);
    }
}

int main()
{
    int from, to, node, edge, i;
    cin>>node>>edge;
    for(i=0; i<edge; i++)
    {
        cin>>from>>to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    for(i=0; i<node; i++)
    {
        if(visited[i]==false)
        {
            cout<<"root is : "<<i<<endl;
            dfs(i);
        }
    }
}


/*
6 9
0 1
0 4
0 5
1 2
1 5
2 3
2 5
3 4
4 5





#include<bits/stdc++.h>
#define sz 100
using namespace std;

vector <int> graph[sz];
bool visited[sz];
void DFS(int now)
{
    visited[now] = true;
    printf("NOW Visiting %d\n",now);

    int i, to, k;
    k=graph[now].size();
    for(i=0; i<k; i++)
    {
        to = graph[now][i];
        if(visited[to] == false)
        {
            DFS(to);
        }
    }
}

int main()
{
    int vertices, edges, from, to, i;
    scanf("%d %d",&vertices, &edges);

        for(i=0; i<edges; i++)
        {
            scanf("%d %d",&from, &to);
            graph[from].push_back(to);
            graph[to].push_back(from);
        }
        for(i=0; i<vertices; i++)
        {
            if(visited[i]== false)
            {
                printf("root------------>>>>>>>>>>>>  %d\n",i);
                DFS(i);
            }
        }
    return 0;
}
*/
