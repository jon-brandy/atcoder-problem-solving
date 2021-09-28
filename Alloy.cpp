#include <stdio.h>

int main(void)
{   
    int A, B;
    scanf("%d %d", &A, &B);
    if(0 < A && B == 0)
    {
        printf("Gold\n");
    }
    else if(A == 0 && 0 < B)
    {
        printf("Silver\n");
    }
    else if(0 < A && 0 < B)
    {
        printf("Alloy\n");
    }

    return 0;
}
