#include <stdio.h>
#include <stdlib.h>
#include <maia_gets.h>
#include <gconio.h>
#include <sys/stat.h>
#include <strings.h>
#include <time.h>
#include "Biblioteca/menus.h"
#include "Estruturas/cadastro.h"

int main()
{
  int menu = 0;

  do
  {
    clrscr();
    menu = 0;
    MenuPrincipal();
    scanf("%d",&menu);

    switch(menu)
    {
        case 1:clrscr();Preencher(); break;
        case 2: clrscr();MenuJogoDaSorte();break;
        case 3: clrscr();printf("\n\nSAINDO DO JOGO\n\n");delay(2000);break;
    }

  }
  while(menu != 3);

    return 0;
}
