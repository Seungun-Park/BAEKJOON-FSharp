#include <iostream>
#include <algorithm>

void printAll(int *n, int i)
{
    for(int j = 0; j < n[i]; ++j)
    {
        printf("%d ", i);
    }
    n[i] = 0;
}

int main()
{
    int N, tmp;
    int max = 0;
    int n[1001] = { 0 };

    scanf("%d", &N);
    
    //수를 입력받으며 개수를 카운트하고 최댓값 기록
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &tmp);
        
        ++(n[tmp]);
        if(tmp > max)
        {
            max = tmp;
        }
    }

    //최댓값까지 루프
    for(int i = 0; i <= max; ++i)
    {
        //해당하는 수가 없으면 넘김
        if(n[i] == 0) continue;

        //i+1이 없으면 개수만큼 출력
        if(n[i + 1] == 0)
        {
            printAll(n, i);
        }
        else if(i + 1 == max)
        {
            printAll(n, i + 1);
            printAll(n, i);
        }
        else
        {
            int j;
            for(j = i + 2; j <= max; ++j)
            {
                if(n[j] > 0)
                {
                    printAll(n, i);
                    printf("%d ", j);
                    --(n[j]);
                    break;
                }
            }
            if(j > max)
            {
                printAll(n, i + 1);
                printAll(n, i);
            }
        }
    }

    return 0;
}