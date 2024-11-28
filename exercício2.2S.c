#include <stdio.h>

int main() {
    float distancia; // Armazena a distância medida pelo sensor
    char continuar;  // Variável para controlar se o usuário deseja continuar

    printf("Robô com Sensor de Distância\n");
    printf("-----------------------------------\n");

    do {
        // Leitura da distância
        printf("Digite a distância medida pelo sensor (em cm): ");
        scanf("%f", &distancia);

        // Exibe a distância medida
        printf("Distância medida: %.2f cm\n", distancia);

        // Verifica se a distância é menor que 10 cm
        if (distancia < 10) {
            printf("ALERTA: Distância menor que 10 cm detectada! Operação encerrada.\n");
            break; // Sai do loop
        }

        // Pergunta ao usuário se deseja continuar
        printf("Deseja continuar as medições? (s/n): ");
        while ((getchar()) != '\n'); // Limpa o buffer de entrada
        scanf("%c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado. Obrigado!\n");
    return 0;
}

