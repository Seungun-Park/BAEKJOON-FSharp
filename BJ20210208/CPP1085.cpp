#include <iostream>

int main()
{
    int x, y, w, h;
    int ans;
    scanf("%d%d%d%d", &x, &y, &w, &h);

    ans = x;
    ans = ans < w - x ? ans : w - x;
    ans = ans < y ? ans : y;
    ans = ans < h - y ? ans : h - y;

    printf("%d", ans);
}