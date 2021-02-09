#include <iostream>
#include <queue>

int data[1000][1000];
int M, N;

void BFS(std::queue<std::pair<int, int>>);

int main()
{
    std::queue<std::pair<int, int>> queue;
    scanf("%d%d", &M, &N);
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            scanf("%d", &data[i][j]);
            if(data[i][j] == 1) queue.push(std::pair<int, int>(i, j));
        }
    }

    BFS(queue);

    int ans = 0;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            if(ans < data[i][j]) ans = data[i][j];
            if(data[i][j] == 0)
            {
                printf("-1");
                return 0;
            }
        }
    }

    printf("%d", ans - 1);

    return 0;
}

void BFS(std::queue<std::pair<int, int>> queue)
{
    while(!queue.empty())
    {
        int x = queue.front().first;
        int y = queue.front().second;

        if(x > 0 && data[x - 1][y] == 0)
        {
            data[x - 1][y] = data[x][y] + 1;
            queue.push(std::pair<int, int>(x - 1, y));
        }
        if(x < N - 1 && data[x + 1][y] == 0)
        {
            data[x + 1][y] = data[x][y] + 1;
            queue.push(std::pair<int, int>(x + 1, y));
        }
        if(y > 0 && data[x][y - 1] == 0)
        {
            data[x][y - 1] = data[x][y] + 1;
            queue.push(std::pair<int, int>(x, y - 1));
        }
        if(y < M - 1 && data[x][y + 1] == 0)
        {
            data[x][y + 1] = data[x][y] + 1;
            queue.push(std::pair<int, int>(x, y + 1));
        }

        queue.pop();
    }
}