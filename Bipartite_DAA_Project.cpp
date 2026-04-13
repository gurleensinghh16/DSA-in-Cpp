#include <iostream>
using namespace std;

#define MAX 10

int graph[MAX][MAX];
int color[MAX];

bool isBipartite(int n, int start)
{
    int queue[MAX];
    int front = 0, rear = 0;

    for(int i = 0; i < n; i++)
        color[i] = -1;

    color[start] = 0;
    queue[rear++] = start;

    while(front < rear)
    {
        int u = queue[front++];

        for(int v = 0; v < n; v++)
        {
            if(graph[u][v] == 1 && color[v] == -1)
            {
                color[v] = 1 - color[u];
                queue[rear++] = v;
            }
            else if(graph[u][v] == 1 && color[v] == color[u])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> graph[i][j];

    if(isBipartite(n,0))
        cout << "Graph is Bipartite";
    else
        cout << "Graph is Not Bipartite";

    return 0;
}