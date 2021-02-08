#include <iostream>

int factorial(int);

int main()
{
    int N, K;

    scanf("%d %d", &N, &K);
    printf("%d", (factorial(N) / (factorial(K) * factorial(N - K))));

    return 0;
}

int factorial(int x)
{
    if(x == 0) return 1;
    return factorial(x - 1) * x;
}