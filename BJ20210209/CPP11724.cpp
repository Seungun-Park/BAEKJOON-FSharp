#include <iostream>

bool data[1001][1001];
bool visited[1001];
int cnt, N;

void DFS(int);
void init();

int main()
{
    int M, x, y;
    scanf("%d%d", &N, &M);
    for(int i = 0; i < M; ++i)
    {
        scanf("%d%d", &x, &y);
        data[x][y] = true;
        data[y][x] = true;
    }

    init();

    printf("%d", cnt);

    return 0;
}

void DFS(int cur)
{
    if(visited[cur]) return;

    visited[cur] = true;

    for(int i = 1; i <= N; ++i)
    {
        if(data[cur][i])
        {
            DFS(i);
        }
    }
}

void init()
{
    for(int i = 1; i <= N; ++i)
    {
        if(!visited[i])
        {
            ++cnt;
            DFS(i);
        }
    }
}