#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int hari = 1;
    int uang = 1;
    while(hari < N)
    {
        hari = hari + 1;
        uang = uang + hari;
        if(uang >= N)
        {
            break;
        }
    }
    printf("%d\n", hari);
    return 0;
}
