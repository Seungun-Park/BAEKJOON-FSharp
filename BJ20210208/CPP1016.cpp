#include <iostream>
#include <vector>

int main()
{
    long long min, max;
    
    scanf("%lld %lld", &min, &max);

    std::vector<bool> sieve(max - min + 1, true);
    int cnt = max - min + 1;
    
    for(long long i = 2; (i * i) <= max; ++i)
    {
        long long j = min / (i * i);
        if(min % (i * i) != 0) ++j;
        for(; (j * i * i) <= max; ++j)
        {
            if(sieve[j * i * i - min])
            {
                sieve[j * i * i - min] = false;
                --cnt;
            }
        }
    }    

    printf("%d", cnt);

    return 0;
}