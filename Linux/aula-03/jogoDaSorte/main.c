#include <stdio.h>
#include <stdlib.h>
#include <maia_gets.h>
#include <gconio.h>

char nome[60];

int main()
{

    fflush(stdin);
    printf("Coloque o seu nome: ");
    scanf("%s",nome[60]);
    my_gets(nome, 60);
    delay(3000);
    clrscr();
    printf("Nome do usuario: %s",nome);

    return 0;
}
