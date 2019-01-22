#include <bits/stdc++.h>
using namespace std;
#define V 100

int minDistance(int dist[], bool sptSet[])
{
    int min_=INT_MAX, min_index;

    for(int v=0; v<V; v++)
    {
        if(sptSet[v]==false && dist[v]<=min_)
            min_=dist[v], min_index=v;
    }

    return min_index;
}

void printPath(int parent[], int j)
{
    if(parent[j]==-1)
        return;
    printPath(parent, parent[j]);
    printf("%d ",j);
}

int printSolution(int dist[], int parent[])
{
    int src=0;
    printf("Vertex \t Distance from Source \t Path \n");
    for(int i=0; i<V; i++)
    {
        printf("%d \t %d \t \t \t %d ", i, dist[i], src);
        printPath(parent, i);
        printf("\n");
    }
}
void dijkstra(int graph[V][V], int src)
{
    int dist[V];
    bool sptSet[V];
    int parent[V];
    parent[0] = -1;
    for(int i=0; i<V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
    dist[src] = 0;
    for(int count_=0; count_<V-1; count_++)
    {
        int u=minDistance(dist, sptSet);
        //cout<<u<<endl;
        sptSet[u]=true;

        for(int v=0; v<V; v++)
        {
            if(!sptSet[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
            {
                cout<<"v    "<<v<<endl;
                dist[v]=dist[u]+graph[u][v];
                parent[v]=u;
            }
        }
    }
    printSolution(dist, parent);
}

int main()
{
    int vertex, edge;
    scanf("%d %d", &vertex, &edge);
    int graph[V][V];
    memset(graph, 0, sizeof(graph));
    while(edge--)
    {
        int a, b, weight;
        scanf("%d %d %d", &a, &b, &weight);
        graph[a][b] = weight;
        graph[b][a] = weight;
    }

    dijkstra(graph, 0);

    return 0;
}
/*
Input:
6 9
0 1 3
0 5 5
0 6 1
1 2 1
2 3 2
2 4 1
3 4 2
4 5 6
5 6 2

*******
0 1 3
0 2 2
1 2 1
1 3 3
2 4 3
3 4 3
3 5 5
4 5 7
*/
