#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    int N, M;
    std::string v[100001];
    std::unordered_map<std::string, int> m;
    char cmd[21];

    std::cin >> N >> M;
    for(int i = 0; i < N; ++i)
    {
        scanf("%s", cmd);
        v[i + 1] = cmd;
        m[v[i + 1]] = i + 1;
    }

    for(int i = 0; i < M; ++i)
    {
        scanf("%s", cmd);
        if(std::isdigit(cmd[0])) printf("%s\n", v[std::atoi(cmd)].c_str());
        else printf("%d\n", m[cmd]);
    }

    return 0;
}