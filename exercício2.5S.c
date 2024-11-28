#include <stdio.h>
#include <locale.h>
#include <string.h> // Para comparar strings, se necess�rio

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 2, y = 2; // Posi��o inicial do rob� (centro do grid 5x5)
    char comando[10]; // Comando inserido pelo usu�rio

    printf("Controle do Rob� Aut�nomo no Grid 5x5\n");
    printf("--------------------------------------\n");
    printf("Comandos dispon�veis:\n");
    printf(" - cima: Move o rob� para cima\n");
    printf(" - baixo: Move o rob� para baixo\n");
    printf(" - esquerda: Move o rob� para a esquerda\n");
    printf(" - direita: Move o rob� para a direita\n");
    printf(" - parar: Encerra o programa\n");

    while (1) { // Loop infinito, encerrado quando o usu�rio digitar "parar"
        printf("\nO rob� est� na posi��o (%d, %d).\n", x, y);
        printf("Digite um comando: ");
        scanf("%s", comando);

        // Processa os comandos
        if (strcmp(comando, "cima") == 0) {
            if (y > 0) {
                y--;
                printf("O rob� se moveu para cima.\n");
            } else {
                printf("Movimento inv�lido! O rob� est� no limite superior do grid.\n");
            }
        } else if (strcmp(comando, "baixo") == 0) {
            if (y < 4) {
                y++;
                printf("O rob� se moveu para baixo.\n");
            } else {
                printf("Movimento inv�lido! O rob� est� no limite inferior do grid.\n");
            }
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) {
                x--;
                printf("O rob� se moveu para a esquerda.\n");
            } else {
                printf("Movimento inv�lido! O rob� est� no limite esquerdo do grid.\n");
            }
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 4) {
                x++;
                printf("O rob� se moveu para a direita.\n");
            } else {
                printf("Movimento inv�lido! O rob� est� no limite direito do grid.\n");
            }
        } else if (strcmp(comando, "parar") == 0) {
            printf("Programa encerrado. O rob� parou na posi��o (%d, %d).\n", x, y);
            break; // Sai do loop
        } else {
            printf("Comando inv�lido! Tente novamente.\n");
        }
    }

    return 0;
}
