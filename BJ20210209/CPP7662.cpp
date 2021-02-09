#include <iostream>
#include <set>

int main()
{
    std::multiset<int> set;
    int T, k;
    char cmd;
    int arg;

    scanf("%d", &T);

    for(int i = 0; i < T; ++i)
    {
        set.erase(set.begin(), set.end());
        scanf("%d", &k);
        for(int j = 0; j < k; ++j)
        {
            std::cin >> cmd >> arg;
            if(cmd == 'I') set.insert(arg);
            else if(cmd == 'D')
            {
                if(!set.empty())
                {
                    if(arg == 1) set.erase(std::prev(set.end()));
                    else if(arg == -1) set.erase(set.begin());
                }
            }
        }
        if(set.empty()) printf("EMPTY\n");
        else printf("%d %d\n", *(set.rbegin()), *(set.begin()));
    }

    return 0;
}