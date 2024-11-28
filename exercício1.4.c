#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float deposito;

    printf("\nOl�, o Banco Nacional LJS te deseja boas-vindas! :)\n");
    printf("\nInforme a quantia depositada para abertura de conta\n");
    Printf("Lembrete: A quantia m�nima para abertura de conta � de R$500,00\n");

    scanf("%f", &deposito);

    while (deposito < 500) {
        printf("\nO valor depositado (R$%.2f) n�o satisfaz o valor m�nimo necess�rio para essa opera��o.\n", deposito);
        printf("Faltam R$%.2f para atingir o valor m�nimo de R$500,00.\n", 500 - deposito);
        printf("Por favor, insira um novo valor:\n");
        scanf("%f", &deposito); // Atualiza o valor
    }

    printf("\nObrigado pelo dep�sito de R$%.2f! Em breve voc� receber� os dados da sua conta! :) \n", deposito);
    return 0;
}

