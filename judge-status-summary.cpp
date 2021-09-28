#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    char string[20];
    int countAC = 0;
    int countWA = 0;
    int countTLE = 0;
    int countRE = 0;
    for(int i = 1; i <= T; i++)
    {
        scanf("%s", string);
        if(strcmp(string, "AC") == 0)
        {
            countAC++;
        }
        else if(strcmp(string, "WA") == 0)
        {
            countWA++;
        }
        else if(strcmp(string, "TLE") == 0)
        {
            countTLE++;
        }
        else if(strcmp(string, "RE") == 0)
        {
            countRE++;
        }
    }
    printf("AC x %d\n", countAC);
    printf("WA x %d\n", countWA);
    printf("TLE x %d\n", countTLE);
    printf("RE x %d\n", countRE);
    return 0;
}
