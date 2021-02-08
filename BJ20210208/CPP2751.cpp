#include <iostream>
#include <list>

int main()
{
    int N;
    std::list<int> seq;

    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
    {
        int tmp;
        scanf("%d", &tmp);
        seq.push_back(tmp);
    }

    seq.sort();

    for(int e : seq)
    {
        printf("%d\n", e);
    }

    return 0;
}