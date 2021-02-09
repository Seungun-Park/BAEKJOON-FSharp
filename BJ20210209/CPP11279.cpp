#include <iostream>
#include <queue>

int main()
{
    int N, x;
    std::priority_queue<int> queue;

    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &x);
        if(x == 0)
        {
            if(queue.empty()) printf("0\n");
            else
            {
                printf("%d\n", queue.top());
                queue.pop();
            }
        }
        else
        {
            queue.push(x);
        }
    }

    return 0;
}