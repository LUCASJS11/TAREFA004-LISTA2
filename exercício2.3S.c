#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolha; // Armazena a escolha do usuário

    printf("Bem-vindo ao Controlador do Robô\n");
    printf("----------------------------------\n");

    do {
        // Exibe o menu de opções
        printf("\nSelecione uma ação para o robô:\n");
        printf("1 - Ligar a lâmpada\n");
        printf("2 - Tocar um som\n");
        printf("3 - Mover o braço\n");
        printf("0 - Encerrar o programa\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        // Processa a escolha do usuário
        switch (escolha) {
            case 1:
                printf("O robô ligou a lâmpada.\n");
                break;
            case 2:
                printf("O robô tocou um som.\n");
                break;
            case 3:
                printf("O robô moveu o braço.\n");
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (escolha != 0);

    printf("Programa encerrado. Obrigado!\n");
    return 0;
}
