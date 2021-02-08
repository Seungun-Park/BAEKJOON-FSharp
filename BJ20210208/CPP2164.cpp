#include <iostream>
#include <queue>

int main()
{
    int N;
    std::queue<int> queue;
    bool reuse = false;

    scanf("%d", &N);
    for(int i = 1; i <= N; ++i)
    {
        queue.push(i);
    }

    while(queue.size() > 1)
    {
        int tmp = queue.front();
        queue.pop();
        if(reuse) 
        {
            queue.push(tmp);
            reuse = false;
        }
        else reuse = true;
    }

    printf("%d", queue.back());

    return 0;
}