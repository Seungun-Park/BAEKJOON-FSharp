#include <iostream>
#include <string>

long long factorial(long long);
long long gcd(long long, long long);
int div(std::string, int);

std::string n[15];
long long dp[1 << 15][100];

int main()
{
    using namespace std;
    int N, k;
    int remainder[15], len[15];
    int ten[51];
    long long numerator, denominator, g;
    
    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        cin >> n[i];
    }
    cin >> k;

    for(int i = 0; i < N; ++i)
    {
        len[i] = n[i].length();
        remainder[i] = div(n[i], k);
    }

    ten[0] = 1;
    for(int i = 1; i <= 50; ++i)
    {
        ten[i] = (ten[i - 1] * 10) % k;
    }

    dp[0][0] = 1;
    for(int i = 0; i < (1 << N); ++i)
    {
        for(int j = 0; j < k; ++j)
        {
            for(int l = 0; l < N; ++l)
            {
                if((i & (1 << l)) == 0)
                {
                    dp[i | (1 << l)][(((j * ten[len[l]]) % k) + remainder[l]) % k] += dp[i][j];
                }
            }
        }
    }

    denominator = factorial(static_cast<long long>(N));
    numerator = dp[(1 << N) - 1][0];

    if(numerator == 0)
    {
        printf("0/1");
    }
    else if(numerator == denominator)
    {
        printf("1/1");
    }
    else
    {
        g = gcd(denominator, numerator);
        printf("%lld/%lld", numerator/g, denominator/g);
    }

    return 0;
}

long long factorial(long long x)
{
    if(x == 0) return 1;
    return x * factorial(x - 1);
}

long long gcd(long long x, long long y)
{
    return y ? gcd(y, x%y) : x;
}

int div(std::string num, int k)
{
    int remainder = 0;
    int digit;

    for(char c : num)
    {
        digit = (static_cast<int>(c) - '0') + remainder * 10;
        remainder = digit % k;
    }

    return remainder;
}