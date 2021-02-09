#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>

int main()
{
    int N;
    scanf("%d", &N);
    std::vector<int> list(N);
    std::set<int> set;
    std::unordered_map<int, int> map;
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &list[i]);
        set.insert(list[i]);
    }

    int i = 0;
    for(int e : set)
    {
        map[e] = i++;
    }

    for(int e : list)
    {
        printf("%d ", map[e]);
    }

    return 0;
}