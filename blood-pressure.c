#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);
    double blood = ((A - B) / 3.0) + B;
    printf("%lf", blood);
    return 0;
}
