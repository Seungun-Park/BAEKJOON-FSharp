#include <iostream>

int main()
{
    int X;
    int sum;

    scanf("%d", &X);

    sum = 0;
    for(int i = 1; i <= X; ++i)
    {
        sum += i;
        if(sum >= X)
        {
            if(i % 2 == 0) 
            {
                printf("%d/%d", i - (sum - X), 1 + (sum - X));
            }
            else
            {
                printf("%d/%d", 1 + (sum - X), i - (sum - X));
            }
            
            break;
        }
    }

    return 0;
}