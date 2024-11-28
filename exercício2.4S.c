#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nivel_bateria; // Variável para armazenar o nível da bateria

    printf("Monitoramento de Bateria do Robô\n");
    printf("---------------------------------\n");

    do {
        // Solicita o nível da bateria ao usuário
        printf("Digite o nível atual da bateria (em %%): ");
        scanf("%f", &nivel_bateria);

        // Verifica se a bateria está abaixo de 20%
        if (nivel_bateria <= 20) {
            printf("ALERTA: Nível de bateria baixo (%.2f%%). Por favor, recarregue o robô.\n", nivel_bateria);
        }

    } while (nivel_bateria <= 20);

    printf("A bateria está em %.2f%%. Robô pronto para operar normalmente!\n", nivel_bateria);
    return 0;
}
