#include <stdio.h>

int main(void)
{
    long long int N;
    scanf("%lld", &N);
    long long int k = 2;
    long long int count = 0;
    while(k <= N)
    {
        k = k * 2;
        count = count + 1;
    }
    printf("%lld\n", count);
    return 0;
}
