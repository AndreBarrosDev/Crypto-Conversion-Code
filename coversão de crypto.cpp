#include <stdio.h>
#include <stdlib.h>

float converterCrypto(float saldoCrypto, float cotcDoll) {
    float quantDoll;
    quantDoll = saldoCrypto * cotcDoll;
    return quantDoll;
}

float converterDollar(float quantDoll, float cotdR) {
    float quantReal;
    quantReal = quantDoll * cotdR;
    return quantReal;
}

int main() {
    float cryp, cotcd, doll, cotdr, real;

    printf("Enter the amount of cryptocoins:\n");
    scanf("%f", &cryp);
    printf("Enter the value of the cryptocoin in Dollar:\n");
    scanf("%f", &cotcd);
    doll = converterCrypto(cryp, cotcd);

    printf("Enter the dollar rate in your currency:\n");
    scanf("%f", &cotdr);
    real = converterDollar(doll, cotdr);

    printf("\n Balance in Dollars: %.2f", doll);
    printf("\n Balance in your currency: %.2f", real);

    return 0;
}
