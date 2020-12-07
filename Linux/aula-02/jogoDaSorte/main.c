#include <stdio.h>
#include <stdlib.h>

int numero[5]; // 0-4( posições que a variavel pode armazenar)

float numeroComVirgula = 2.5f;

char umCaracter='a';

char nome[60] = "";

int main()
{
    numero[0]=16;


    printf("O numero do vetor inteiro chamado numero eh igual = %i",numero[0]);
    printf("\n\n");
    printf("Apenas um caracter = %c",umCaracter);printf("\n\n");
    printf("Qual o seu nome: ");
    printf("\n\n");
    scanf("%s",&nome);
    printf("O seu nome = %s",nome);
    printf("\n\n");

    return 0;
}
