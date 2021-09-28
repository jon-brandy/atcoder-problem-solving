#include <stdio.h>

int main(void)
{   
    int A, B;
    scanf("%d %d", &A, &B);
    if(A * 6 >= B && B >= A)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
