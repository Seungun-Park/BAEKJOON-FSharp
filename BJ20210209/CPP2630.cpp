#include <iostream>

int color[2];
int paper[128][128];

void solve(int, int, int);

int main()
{
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            scanf("%d", &paper[i][j]);
        }
    }

    solve(N, 0, 0);

    printf("%d\n%d", color[0], color[1]);

    return 0;
}

void solve(int n, int x, int y)
{
    int standard = paper[x][y];
    for(int i = x; i < x + n; ++i)
    {
        for(int j = y; j < y + n; ++j)
        {
            if(standard != paper[i][j])
            {
                int next = n / 2;
                solve(next, x + next, y); //1사분면
                solve(next, x, y); //2사분면
                solve(next, x, y + next); //3사분면
                solve(next, x + next, y + next); //4사분면
                return;
            }
        }
    }
    ++color[standard];
}