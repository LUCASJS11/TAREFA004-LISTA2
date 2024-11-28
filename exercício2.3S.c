#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolha; // Armazena a escolha do usu�rio

    printf("Bem-vindo ao Controlador do Rob�\n");
    printf("----------------------------------\n");

    do {
        // Exibe o menu de op��es
        printf("\nSelecione uma a��o para o rob�:\n");
        printf("1 - Ligar a l�mpada\n");
        printf("2 - Tocar um som\n");
        printf("3 - Mover o bra�o\n");
        printf("0 - Encerrar o programa\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        // Processa a escolha do usu�rio
        switch (escolha) {
            case 1:
                printf("O rob� ligou a l�mpada.\n");
                break;
            case 2:
                printf("O rob� tocou um som.\n");
                break;
            case 3:
                printf("O rob� moveu o bra�o.\n");
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }

    } while (escolha != 0);

    printf("Programa encerrado. Obrigado!\n");
    return 0;
}
