#include <stdio.h>
#include <locale.h>
#include <math.h>




int main() {

setlocale(LC_ALL, "Portuguese");

int porcentagem;
float passos_dados = 0;
float passos_total= 0;
int metros;

while (passos_total<10000){

    printf("\nOlá, Lucas! Quantos passos você deu hoje? \n");
    scanf("%f",&passos_dados);

    passos_total += passos_dados;
// cada passo equivale a 10metros


    if (passos_total< 10000){

        porcentagem = passos_total*100/10000;
 metros=passos_total*10;

        printf("\nVocê ainda não completou sua meta, continue assim!\n");
        printf("%d%% da meta concluído", porcentagem);
        printf("\n voce andou %d metros",metros);
    }
        else {
 porcentagem = passos_total*100/10000;

            printf("\nParabéns, você concluiu %d%% da sua meta de 10.000 passos!!\n ", porcentagem);
        }
    }

    return 0;
}








