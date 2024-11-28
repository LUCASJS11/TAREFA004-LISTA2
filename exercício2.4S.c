#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nivel_bateria; // Vari�vel para armazenar o n�vel da bateria

    printf("Monitoramento de Bateria do Rob�\n");
    printf("---------------------------------\n");

    do {
        // Solicita o n�vel da bateria ao usu�rio
        printf("Digite o n�vel atual da bateria (em %%): ");
        scanf("%f", &nivel_bateria);

        // Verifica se a bateria est� abaixo de 20%
        if (nivel_bateria <= 20) {
            printf("ALERTA: N�vel de bateria baixo (%.2f%%). Por favor, recarregue o rob�.\n", nivel_bateria);
        }

    } while (nivel_bateria <= 20);

    printf("A bateria est� em %.2f%%. Rob� pronto para operar normalmente!\n", nivel_bateria);
    return 0;
}
