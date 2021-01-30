#include <iostream>
#include <vector>

std::vector<int> student[101];
int notebook[101];
bool visited[101];

bool dfs(int);

int main()
{
    int N, M, a, b, cnt;

    scanf("%d %d", &N, &M);

    for(int i = 0; i < M; ++i)
    {
        scanf("%d %d", &a, &b);
        student[a].push_back(b);
    }

    cnt = 0;
    for(int i = 1; i <= N; ++i)
    {
        std::fill(visited, visited  + N + 1, false);
        if(dfs(i)) ++cnt;
    }

    printf("%d", cnt);
    return 0;
}

bool dfs(int p)
{
    for(int i = 0; i < student[p].size(); ++i)
    {
        int cur = student[p][i];

        if(visited[cur]) continue;

        visited[cur] = true;
        if(notebook[cur] == 0 || dfs(notebook[cur]))
        {
            notebook[cur] = p;
            return true;
        }
    }
    return false;
}