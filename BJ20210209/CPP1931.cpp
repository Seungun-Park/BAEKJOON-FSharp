#include <iostream>
#include <vector>
#include <algorithm>

bool comp(std::pair<int, int>, std::pair<int, int>);

int main()
{
    int N;

    scanf("%d", &N);

    std::vector<std::pair<int, int>> time(N);

    for(int i = 0; i < N; ++i)
    {
        std::cin >> time[i].first >> time[i].second;
    }

    std::sort(time.begin(), time.end(), comp);

    int cnt = 0, t = 0;
    for(auto iter : time)
    {
        if(iter.first >= t)
        {
            ++cnt;
            t = iter.second;
        }
    }

    printf("%d", cnt);

    return 0;
}

bool comp(std::pair<int, int> p1, std::pair<int, int> p2)
{
    if(p1.second == p2.second) return p1.first < p2.first;
    return p1.second < p2.second;
}