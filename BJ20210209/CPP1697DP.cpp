//더 고민해보자
#include <iostream>
#include <algorithm>

#define min(x, y) (x < y ? x : y)

int main()
{
    int N, K;

    scanf("%d%d", &N, &K);
    if(K <= N)
    {
        printf("%d", N - K);
        return 0;
    }

    int dp[200003];
    std::fill_n(dp, 200003, 200003);

    dp[N] = 0;
    for(int i = 1; i <= N; ++i)
    {
        dp[N - i] = i;
    }
    int tmp = dp[K];
    do
    {
        tmp = dp[K];
        for(int i = N + 1; i <= K + K; ++i)
        {
            dp[i] = min(dp[i], dp[i - 1] + 1);
            dp[i] = min(dp[i], dp[i + 1] + 1);
            if(i % 2 == 0) dp[i] = min(dp[i], dp[i / 2]) + 1;
        }
    } while (tmp != dp[K]);
    
    printf("%d", dp[K]);

    return 0;
}