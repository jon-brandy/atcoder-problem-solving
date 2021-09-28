#include <stdio.h>

int main(void){

    int N;
    scanf("%d", &N);
    int harga = 1.08 * N;
    if(harga < 206)
    {
        puts("Yay!");
    }
    else if (harga == 206)
    {
        puts("so-so");
    }
    else if (harga > 206)
    {
        printf(":(");
    }
    

    return 0;
}
