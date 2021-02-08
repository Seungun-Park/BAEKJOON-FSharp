#include <iostream>

#define min(x, y) x < y ? x : y

int main()
{
    int dp[1000001] = { 0 };
    int N, tmp;

    scanf("%d", &N);

    for(int i = 2; i <= N; ++i)
    {
        tmp = dp[i - 1] + 1;

        if(i % 3 == 0)
        {
            tmp = min(dp[i / 3] + 1, tmp);
        }

        if(i % 2 == 0)
        {
            tmp = min(dp[i / 2] + 1, tmp);
        }

        dp[i] = tmp;
    }

    printf("%d", dp[N]);

    return 0;
}