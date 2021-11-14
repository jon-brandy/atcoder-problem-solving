#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    if(N % 1000 != 0)
    {
        int hitung = (N + 1000) / 1000;
        int kembalian = (hitung * 1000) - N;
        printf("%d\n", kembalian);
    }
    else
    {
        printf("0\n");
    }
    
    return 0;
}
