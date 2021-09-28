#include <stdio.h>

int main(void)
{
    int N, A, X, Y;
    int hitung;
    scanf("%d %d %d %d", &N, &A, &X, &Y);
    if(N > A)
    {
        hitung = (A * X) + (N - A) * Y;
    }
    else
    {
        hitung = A * X;
    }
    printf("%d\n", hitung);

    return 0;
}
