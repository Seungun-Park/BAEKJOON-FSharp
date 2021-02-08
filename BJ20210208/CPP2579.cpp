#include <iostream>

#define max(x, y) (x < y ? y : x)

int main()
{
    int dp[301][2] = { 0 };
    int score, N;

    scanf("%d\n%d", &N, &score);
    dp[1][0] = score;
    dp[1][1] = score;
    for(int i = 2; i <= N; ++i)
    {
        scanf("%d", &score);
        dp[i][0] = dp[i - 1][1] + score;
        dp[i][1] = max(dp[i - 2][0], dp[i - 2][1]) + score;
    }

    printf("%d", max(dp[N][0], dp[N][1]));

    return 0;
}

/*
300 * 10,000 = 3,000,000 integer ok
한칸 올라간 경우 dp[i][0] = dp[i - 1][1] + score;
두칸 올라간 경우 dp[i][1] = max(dp[i - 2][0], dp[i - 2][1]) + score;
*/