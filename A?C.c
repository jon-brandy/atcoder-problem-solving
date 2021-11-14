#include <stdio.h>

int main(void)
{
    char string[3];
    scanf("%s", string);
    if(string[1] == 'R')
    {
        printf("ABC\n");
    }
    else
    {
        printf("ARC\n");
    }
    return 0;
}
