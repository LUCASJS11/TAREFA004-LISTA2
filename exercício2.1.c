#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 5, y = 5; // Posição inicial do robô no centro do espaço 10x10
    int comando;      // Variável para armazenar o comando do usuário

    printf("Bem-vindo ao simulador do robô!\n");
    printf("Comandos disponíveis:\n");
    printf(" 1 - Frente\n");
    printf(" 2 - Trás\n");
    printf(" 3 - Esquerda\n");
    printf(" 4 - Direita\n");
    printf(" 0 - Sair\n\n");

    do {
        printf("O robô está na posição (%d, %d).\n", x, y);
        printf("Digite um comando: ");
        scanf("%d", &comando);

        switch (comando) {
            case 1: // Frente
                if (y < 10) {
                    y++;
                    printf("O robô se moveu para frente.\n");
                } else {
                    printf("O robô não pode se mover para frente, está no limite do espaço.\n");
                }
                break;
            case 2: // Trás
                if (y > 0) {
                    y--;
                    printf("O robô se moveu para trás.\n");
                } else {
                    printf("O robô não pode se mover para trás, está no limite do espaço.\n");
                }
                break;
            case 3: // Esquerda
                if (x > 0) {
                    x--;
                    printf("O robô se moveu para a esquerda.\n");
                } else {
                    printf("O robô não pode se mover para a esquerda, está no limite do espaço.\n");
                }
                break;
            case 4: // Direita
                if (x < 10) {
                    x++;
                    printf("O robô se moveu para a direita.\n");
                } else {
                    printf("O robô não pode se mover para a direita, está no limite do espaço.\n");
                }
                break;
            case 0: // Sair
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Comando inválido. Tente novamente.\n");
        }
    } while (comando != 0);

    printf("Programa encerrado. O robô parou na posição (%d, %d).\n", x, y);

    return 0;
}
