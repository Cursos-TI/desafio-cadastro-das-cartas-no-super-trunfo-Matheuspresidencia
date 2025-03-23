#include <stdio.h>

int main() {
    char codigo = 'B01,B02';
    char nome[20];
    char brasilia,DestritoFederal;
    int populacao = 40.00;
    int PontosTuristicos = 12;
    float area = 26.000;
    float pib = 84.2;

    printf("o codigo é: %c\n");
    printf("o nome é: %s");
    printf("qual a pupulacao é: %f\n");
    printf("pontosTuristicos é: %d\n");
    printf("a area é: %f\n");
    printf("o pib é: %e\n");

    return 0;
}