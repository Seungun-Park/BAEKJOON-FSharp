#include <iostream>

#define min(x, y) (x < y ? x : y)

int main()
{
    // 0.R 1.G 2.B
    int dp[1001][3] = { 0 };
    int N, R, G, B;

    scanf("%d", &N);
    scanf("%d %d %d", &dp[0][0], &dp[0][1], &dp[0][2]);
    for(int i = 1; i < N; ++i)
    {
        scanf("%d %d %d", &R, &G, &B);
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + R;
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + G;
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + B;
    }

    printf("%d", min(min(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]));

    return 0;
}