#include <stdio.h>

int main() {
    int opção;
    float saldo = 1000.00;

    printf("escolha uma opção:\n");
    printf("1. verificar saldo:\n");
    printf("2. fazer deposito:\n");
    printf("3. fazer saque\n");
    scanf("%d", &opção);

    swuitch(opção)
    {
    case 1:
        printf(" O seu saldo è: R$ %f\n", saldo);
       break;
    case 2:
        printf("Digite o banco que deseja depositar");
        printf("Digite a agencia que deseja depositar");
        printf("Digite a conta que deseja depositar");
       break;
    case 3:
        printf("Digite o valor que deseja sacer");

    default:
        printf("opção invalida!");
    break;
}