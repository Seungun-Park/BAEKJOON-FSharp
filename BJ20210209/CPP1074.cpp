#include <iostream>

int quadrant(int, int, int);

int main()
{
    int N, r, c;

    scanf("%d%d%d", &N, &r, &c);
    printf("%d", quadrant(1 << (N - 1), r, c));

    return 0;
}

int quadrant(int N, int r, int c)
{
    if(N == 1)
    {
        return r * 2 + c;
    }

    //1사분면
    if(r < N && c >= N)
    {
        return N * N + quadrant(N >> 1, r, c - N);
    }
    //2사분면
    else if(r < N && c < N)
    {
        return quadrant(N >> 1, r, c);
    }
    //3사분면
    else if(r >= N && c < N)
    {
        return N * N * 2 + quadrant(N >> 1, r - N, c);
    }
    //4사분면
    else if(r >= N && c >= N)
    {
        return N * N * 3 + quadrant(N >> 1, r - N, c - N);
    }
    return -1;
}