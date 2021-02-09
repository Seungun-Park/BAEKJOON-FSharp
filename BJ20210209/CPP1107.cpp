#include <iostream>
#include <cstring>

bool check(int, bool*, int&);

int main()
{
    int N, M;
    bool button[10];
    memset(button, true, sizeof(button));

    scanf("%d%d", &N, &M);
    for(int i = 0; i < M; ++i)
    {
        int tmp;
        scanf("%d", &tmp);
        button[tmp] = false;
    }

    int ans = 1000001;
    int len = 1;
    for(int i = 0; i <= 1000001; ++i)
    {
        len = 1;
        if(i <= N && check(N - i, button, len))
        {
            ans = i + len;
            break;
        }
        len = 1;
        if(check(N + i, button, len))
        {
            ans = i + len;
            break;
        }
    }
    if(N >= 100 && ans > N - 100) ans = N - 100;
    else if(N < 100 && ans > 100 - N) ans = 100 - N;

    printf("%d", ans);

    return 0;
}

bool check(int ch, bool* button, int &len)
{
    if(ch < 0) return false;

    if(ch < 10) return button[ch];
    else if(button[ch % 10]) return check(ch / 10, button, ++len);
    else return false;
}