#include <stdio.h>

int main() {
    float distancia; // Armazena a dist�ncia medida pelo sensor
    char continuar;  // Vari�vel para controlar se o usu�rio deseja continuar

    printf("Rob� com Sensor de Dist�ncia\n");
    printf("-----------------------------------\n");

    do {
        // Leitura da dist�ncia
        printf("Digite a dist�ncia medida pelo sensor (em cm): ");
        scanf("%f", &distancia);

        // Exibe a dist�ncia medida
        printf("Dist�ncia medida: %.2f cm\n", distancia);

        // Verifica se a dist�ncia � menor que 10 cm
        if (distancia < 10) {
            printf("ALERTA: Dist�ncia menor que 10 cm detectada! Opera��o encerrada.\n");
            break; // Sai do loop
        }

        // Pergunta ao usu�rio se deseja continuar
        printf("Deseja continuar as medi��es? (s/n): ");
        while ((getchar()) != '\n'); // Limpa o buffer de entrada
        scanf("%c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado. Obrigado!\n");
    return 0;
}

