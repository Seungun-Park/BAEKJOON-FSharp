#include <iostream>

int main()
{
    int dp[41][2] = { {1, 0}, {0, 1}, 0 };
    int T, N;

    for(int i = 2; i < 41; ++i)
    {
        dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
        dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
    }

    scanf("%d", &T);
    for(int i = 0; i < T; ++i)
    {
        scanf("%d", &N);
        printf("%d %d\n", dp[N][0], dp[N][1]);
    }

    return 0;
}