#include <stdio.h>

int main(void)
{   
    int a, b;
    scanf("%d %d", &a, &b);
    double average = (a + b) / 2.0;
    if(average > (int)average)
    {
        printf("%d\n", (int)average + 1);
    }
    else
    {
        printf("%d\n", (int)average);
    }

    return 0;
}
