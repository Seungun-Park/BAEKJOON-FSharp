#include <iostream>

int N;
bool visited[101] = { false };
bool network[101][101] = { false };

void DFS(int);

int main()
{
    int M;
    int x, y;

    scanf("%d%d", &N, &M);
    for(int i = 0; i < M; ++i)
    {
        scanf("%d%d", &x, &y);
        network[x][y] = true;
        network[y][x] = true;
    }

    DFS(1);

    int cnt = 0;
    for(int i = 2; i <= N; ++i)
    {
        if(visited[i]) ++cnt;
    }

    printf("%d", cnt);

    return 0;
}

void DFS(int cur)
{
    if(visited[cur]) return;
    visited[cur] = true;
    for(int i = 1; i <= N; ++i)
    {
        if(network[cur][i]) DFS(i);
    }
}