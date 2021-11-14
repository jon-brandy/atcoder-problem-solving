#include <stdio.h>

int main(void)
{
    char string[3];
    scanf("%s", string);
    if(string[0] == string[1] && string[1] == string[2])
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}
