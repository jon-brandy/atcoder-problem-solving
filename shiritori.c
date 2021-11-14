#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[225], string2[225], string3[225];
    scanf("%s %s %s", string, string2, string3);
    int str1 = strlen(string);
    int str2 = strlen(string2);
    if(string[str1 - 1] == string2[0] && string2[str2 - 1] == string3[0])
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
