#include <iostream>

#define max(x, y) (x < y ? y : x)

int main()
{
    int triangle[500][500];
    int n;

    scanf("%d\n%d", &n, &triangle[0][0]);

    for(int i = 1; i < n; ++i)
    {
        scanf("%d", &triangle[i][0]);
        triangle[i][0] += triangle[i - 1][0];

        for(int j = 1; j < i; ++j)
        {
            scanf("%d", &triangle[i][j]);
            triangle[i][j] += max(triangle[i - 1][j - 1], triangle[i - 1][j]);
        }

        scanf("%d", &triangle[i][i]);
        triangle[i][i] += triangle[i - 1][i - 1];
    }

    int MAX = 0;
    for(int i = 0; i < n; ++i)
    {
        MAX = max(MAX, triangle[n - 1][i]);
    }

    printf("%d", MAX);

    return 0;
}