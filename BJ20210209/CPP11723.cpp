#include <iostream>
#include <cstring>
#include <unordered_set>

int main()
{
    std::unordered_set<int> set;
    char cmd[7];
    int arg;
    int N;

    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
    {
        scanf("%s", cmd);
        if(!strcmp(cmd, "add")){
            scanf("%d", &arg);
            set.insert(arg);
        }
        else if(!strcmp(cmd, "remove"))
        {
            scanf("%d", &arg);
            set.erase(arg);
        }
        else if(!strcmp(cmd, "check"))
        {
            scanf("%d", &arg);
            printf("%ld\n", set.count(arg));
        }
        else if(!strcmp(cmd, "toggle"))
        {
            scanf("%d", &arg);
            if(set.find(arg) != set.end()) set.erase(arg);
            else set.insert(arg);
        }
        else if(!strcmp(cmd, "all"))
        {
            for(int j = 1; j <= 20; ++j)
            {
                set.insert(j);
            }
        }
        else if(!strcmp(cmd, "empty")) set.erase(set.begin(), set.end());
    }

    return 0;
}