#include <iostream>

int main()
{
    int dp[11] = { 0, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274 };
    int T, n;

    scanf("%d", &T);
    for(int i = 0; i < T; ++i)
    {
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }

    return 0;
}