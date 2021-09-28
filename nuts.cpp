#include <stdio.h>

int main(void)
{
    int T, N;
    scanf("%d", &T);
    int count = 0;
    for(int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        while(N > 10)
        {
            N = N - 1;
            count = count + 1;
        }
    }
    printf("%d\n", count);
    
    return 0;
}
