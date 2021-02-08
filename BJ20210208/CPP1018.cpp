#include <iostream>
#include <string>

int main()
{
    std::string data[50];
    int N, M, ans = 2500;

    std::cin >> N >> M;
    for(int i = 0; i < N; ++i)
    {
        std::cin >> data[i];
    }

    for(int i = 0; i < N - 7; ++i)
    {
        for(int j = 0; j < M - 7; ++j)
        {
            int cnt1 = 0, cnt2 = 0;
            char cur1 = data[i][j];
            char cur2;
            if(cur1 == 'W') cur2 = 'B';
            else cur2 = 'W';
            for(int k = i; k < i + 8; ++k)
            {
                for(int l = j; l < j + 8; ++l)
                {
                    if(data[k][l] != cur1) ++cnt1;
                    if(data[k][l] != cur2) ++cnt2;

                    if(cur1 == 'W') cur1 = 'B';
                    else cur1 = 'W';
                    if(cur1 == 'W') cur2 = 'B';
                    else cur2 = 'W';
                }
                if(cur1 == 'W') cur1 = 'B';
                else cur1 = 'W';
                if(cur1 == 'W') cur2 = 'B';
                else cur2 = 'W';
            }
            if(cnt1 < ans) ans = cnt1;
            if(cnt2 < ans) ans = cnt2;
        }
    }

    printf("%d", ans);

    return 0;
}