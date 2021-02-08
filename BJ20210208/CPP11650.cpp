#include <iostream>
#include <vector>
#include <algorithm>

bool comp(std::pair<int, int>, std::pair<int, int>);

int main()
{
    int N;

    std::cin >> N;

    std::vector<std::pair<int, int>> location(N);
    for(int i = 0; i < N; ++i)
    {
        std::cin >> location[i].first >> location[i].second;
    }

    std::sort(location.begin(), location.end(), comp);

    for(std::pair<int, int> e : location)
    {
        printf("%d %d\n", e.first, e.second);
    }

    return 0;
}

bool comp(std::pair<int, int> p1, std::pair<int, int> p2)
{
    if(p1.first == p2.first) return p1.second < p2.second;
    return p1.first < p2.first;
}