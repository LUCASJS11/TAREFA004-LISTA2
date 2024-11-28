#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float deposito;

    printf("\nOlá, o Banco Nacional LJS te deseja boas-vindas! :)\n");
    printf("\nInforme a quantia depositada para abertura de conta\n");
    Printf("Lembrete: A quantia mínima para abertura de conta é de R$500,00\n");

    scanf("%f", &deposito);

    while (deposito < 500) {
        printf("\nO valor depositado (R$%.2f) não satisfaz o valor mínimo necessário para essa operação.\n", deposito);
        printf("Faltam R$%.2f para atingir o valor mínimo de R$500,00.\n", 500 - deposito);
        printf("Por favor, insira um novo valor:\n");
        scanf("%f", &deposito); // Atualiza o valor
    }

    printf("\nObrigado pelo depósito de R$%.2f! Em breve você receberá os dados da sua conta! :) \n", deposito);
    return 0;
}

