#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 5, y = 5; // Posi��o inicial do rob� no centro do espa�o 10x10
    int comando;      // Vari�vel para armazenar o comando do usu�rio

    printf("Bem-vindo ao simulador do rob�!\n");
    printf("Comandos dispon�veis:\n");
    printf(" 1 - Frente\n");
    printf(" 2 - Tr�s\n");
    printf(" 3 - Esquerda\n");
    printf(" 4 - Direita\n");
    printf(" 0 - Sair\n\n");

    do {
        printf("O rob� est� na posi��o (%d, %d).\n", x, y);
        printf("Digite um comando: ");
        scanf("%d", &comando);

        switch (comando) {
            case 1: // Frente
                if (y < 10) {
                    y++;
                    printf("O rob� se moveu para frente.\n");
                } else {
                    printf("O rob� n�o pode se mover para frente, est� no limite do espa�o.\n");
                }
                break;
            case 2: // Tr�s
                if (y > 0) {
                    y--;
                    printf("O rob� se moveu para tr�s.\n");
                } else {
                    printf("O rob� n�o pode se mover para tr�s, est� no limite do espa�o.\n");
                }
                break;
            case 3: // Esquerda
                if (x > 0) {
                    x--;
                    printf("O rob� se moveu para a esquerda.\n");
                } else {
                    printf("O rob� n�o pode se mover para a esquerda, est� no limite do espa�o.\n");
                }
                break;
            case 4: // Direita
                if (x < 10) {
                    x++;
                    printf("O rob� se moveu para a direita.\n");
                } else {
                    printf("O rob� n�o pode se mover para a direita, est� no limite do espa�o.\n");
                }
                break;
            case 0: // Sair
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Comando inv�lido. Tente novamente.\n");
        }
    } while (comando != 0);

    printf("Programa encerrado. O rob� parou na posi��o (%d, %d).\n", x, y);

    return 0;
}
