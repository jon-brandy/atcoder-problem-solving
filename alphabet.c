#include <stdio.h>

int main(void)
{
    char alpha;
    scanf("%s", &alpha);
    if(alpha >= 65 && alpha <= 90)
    {
        printf("A\n");
    }
    else
    {
        printf("a\n");
    }

    return 0;
}
