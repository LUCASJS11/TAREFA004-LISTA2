#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    float temperatura;

    printf("Sistema de Monitoramento de Temperatura\n");
    printf("----------------------------------------\n");

    while (1) { // Loop infinito para monitoramento contínuo
        printf("Digite a temperatura atual (em °C): ");
        scanf("%f", &temperatura);

        if (temperatura < 20.0 || temperatura > 25.0) {
            printf("Giovanna, regule a temperatura!! Temperatura fora do intervalo seguro! ");
        } else {
            printf("Temperatura estável. ");
        }

        printf("Monitorando...\n\n");
    }

    return 0;
}
