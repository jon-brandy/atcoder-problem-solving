#include <stdio.h>

int main(void)
{
    long long int N;
    long long int count = 0;
    scanf("%lld", &N);
    for(int i = 1; i <= N; i++)
    {
        if(i % 3 != 0 && i % 5 != 0)
        {
            count = count + i;
        }
    }
    printf("%lld", count);
    return 0;
}
