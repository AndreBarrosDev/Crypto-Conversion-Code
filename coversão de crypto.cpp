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

    printf("Digite o saldo de sua crypto moeda:\n");
    scanf("%f", &cryp);
    printf("Digite o valor da moeda em Dollar:\n");
    scanf("%f", &cotcd);
    doll = converterCrypto(cryp, cotcd);

    printf("Digite o valor do Dollar em Real:\n");
    scanf("%f", &cotdr);
    real = converterDollar(doll, cotdr);

    printf("\nSaldo em Dollar: %.2f", doll);
    printf("\nSaldo em Real: %.2f", real);

    return 0;
}
