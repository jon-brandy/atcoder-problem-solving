#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[225];
    scanf("%s", string);
    if(strcmp(string, "Hello,World!") == 0)
    {
        printf("AC\n");
    }
    else
    {
        printf("WA\n");
    }
    return 0;
}
