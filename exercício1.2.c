#include <stdio.h>
#include <locale.h>
#include <math.h>




int main() {

setlocale(LC_ALL, "Portuguese");

float combustivel = 0;

while (combustivel<100) {

    printf("\n\nQual a autonomia do veiculo? (Digite 100 para encerrar)\n");
    scanf("%f", &combustivel);

    if(combustivel < 15){

        printf("\n\nALERTA!! Abasteça o veiculo.\n");
    }
        else if (combustivel <100) {

            printf("\nO nível de combustível é %.f%%\n", combustivel);
        }


    }

    printf("\nO veiculo esta carregado (%.f%%).\n\n", combustivel);

    return 0;
}





