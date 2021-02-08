#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool comp(std::pair<int, std::string>, std::pair<int, std::string>);

int main()
{
    int N;
    std::vector<std::pair<int, std::string>> member;

    std::cin >> N;
    for(int i = 0; i < N; ++i)
    {
        int age;
        std::string name;
        std::cin >> age >> name;
        member.push_back(std::make_pair(age, name));
    }

    std::stable_sort(member.begin(), member.end(), comp);

    for(std::pair<int, std::string> e : member)
    {
        printf("%d %s\n", e.first, e.second.c_str());
    }

    return 0;
}

bool comp(std::pair<int, std::string> p1, std::pair<int, std::string> p2)
{
    return p1.first < p2.first;
}