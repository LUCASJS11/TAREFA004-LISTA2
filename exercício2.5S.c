#include <stdio.h>
#include <locale.h>
#include <string.h> // Para comparar strings, se necessário

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 2, y = 2; // Posição inicial do robô (centro do grid 5x5)
    char comando[10]; // Comando inserido pelo usuário

    printf("Controle do Robô Autônomo no Grid 5x5\n");
    printf("--------------------------------------\n");
    printf("Comandos disponíveis:\n");
    printf(" - cima: Move o robô para cima\n");
    printf(" - baixo: Move o robô para baixo\n");
    printf(" - esquerda: Move o robô para a esquerda\n");
    printf(" - direita: Move o robô para a direita\n");
    printf(" - parar: Encerra o programa\n");

    while (1) { // Loop infinito, encerrado quando o usuário digitar "parar"
        printf("\nO robô está na posição (%d, %d).\n", x, y);
        printf("Digite um comando: ");
        scanf("%s", comando);

        // Processa os comandos
        if (strcmp(comando, "cima") == 0) {
            if (y > 0) {
                y--;
                printf("O robô se moveu para cima.\n");
            } else {
                printf("Movimento inválido! O robô está no limite superior do grid.\n");
            }
        } else if (strcmp(comando, "baixo") == 0) {
            if (y < 4) {
                y++;
                printf("O robô se moveu para baixo.\n");
            } else {
                printf("Movimento inválido! O robô está no limite inferior do grid.\n");
            }
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) {
                x--;
                printf("O robô se moveu para a esquerda.\n");
            } else {
                printf("Movimento inválido! O robô está no limite esquerdo do grid.\n");
            }
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 4) {
                x++;
                printf("O robô se moveu para a direita.\n");
            } else {
                printf("Movimento inválido! O robô está no limite direito do grid.\n");
            }
        } else if (strcmp(comando, "parar") == 0) {
            printf("Programa encerrado. O robô parou na posição (%d, %d).\n", x, y);
            break; // Sai do loop
        } else {
            printf("Comando inválido! Tente novamente.\n");
        }
    }

    return 0;
}
