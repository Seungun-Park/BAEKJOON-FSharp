#include <iostream>
#include <queue>

int BFS(int, int);

int main()
{
    int N, K;

    scanf("%d%d", &N, &K);
    if(K <= N)
    {
        printf("%d", N - K);
        return 0;
    }

    printf("%d", BFS(N, K));

    return 0;
}

int BFS(int N, int K)
{
    int visited[200003] = { 0 };
    std::queue<int> queue;

    visited[N] = 1;
    queue.push(N);

    do
    {
        if(queue.front() > 0 && visited[queue.front() - 1] == 0)
        {
            visited[queue.front() - 1] = visited[queue.front()] + 1;
            queue.push(queue.front() - 1);
            if(queue.front() - 1 == K) break;
        }
        if(queue.front() <= 100000 && visited[queue.front() + 1] == 0)
        {
            visited[queue.front() + 1] = visited[queue.front()] + 1;
            queue.push(queue.front() + 1); 
            if(queue.front() + 1 == K) break;
        }
        if(queue.front() <= 100000 && visited[queue.front() * 2] == 0)
        {
            visited[queue.front() * 2] = visited[queue.front()] + 1;
            queue.push(queue.front() * 2); 
            if(queue.front() * 2 == K) break;
        }
        queue.pop();
    } while (queue.front() != K);
    return visited[K] - 1;
}