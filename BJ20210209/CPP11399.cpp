#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> queue;
    int N;
    int tmp;

    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &tmp);
        queue.push(tmp);
    }

    tmp = 0;
    while(!queue.empty())
    {
        tmp += queue.top() * queue.size();
        queue.pop();
    }

    printf("%d", tmp);

    return 0;
}