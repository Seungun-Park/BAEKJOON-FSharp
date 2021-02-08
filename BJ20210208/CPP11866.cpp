#include <iostream>
#include <queue>

int main()
{
    int N, K;
    std::queue<int> seq;
    int cnt;

    scanf("%d %d", &N, &K);
    for(int i = K + 1; i <= N; ++i)
    {
        seq.push(i);
    }
    for(int i = 1; i < K; ++i)
    {
        seq.push(i);
    }

    printf("<%d", K);
    cnt = 0;
    while(!seq.empty())
    {
        ++cnt;
        if(cnt == K)
        {
            printf(", %d", seq.front());
            seq.pop();
            cnt = 0;
        }
        else
        {
            seq.push(seq.front());
            seq.pop();
        }
    }
    printf(">");

    return 0;
}