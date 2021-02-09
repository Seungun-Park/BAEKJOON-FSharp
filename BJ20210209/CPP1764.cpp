#include <iostream>
#include <unordered_set>
#include <set>
#include <string>

int main()
{
    std::unordered_set<std::string> listen;
    std::set<std::string> people;
    int N, M;
    char name[21];

    std::cin >> N >> M;
    for(int i = 0; i < N; ++i)
    {
        scanf("%s", name);
        listen.insert(name);
    }
    for(int i = 0; i < M; ++i)
    {
        scanf("%s", name);
        if(listen.find(name) != listen.end())
        {
            people.insert(name);
        }
    }

    printf("%ld\n", people.size());
    for(std::string e: people)
    {
        std::cout << e << "\n";
    }

    return 0;
}