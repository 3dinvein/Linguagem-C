void MenuPrincipal()
{
    printf("\n\nJOGO DA SORTE\n\n");
    printf("\n\n1 - CADASTRE O JOGADOR:\n\n");
    printf("\n\n2 - ENTRAR NO JOGO DA SORTE:\n\n");
    printf("\n\n3 - SAIR DO JOGO:\n\n");
}

void MenuJogoDaSorte()
{
    int menuOpcao;
    printf("\n\n\n");
    printf("SELECIONE UM JOGO DA SORTE\n\n\n\n");
    printf("[ 1 ]    TCHEBAGUAL\n\n");
    printf("[ 7 ]    PARA SAIR\n\n");
    scanf("%i",&menuOpcao);

    if(menuOpcao == 1)
    {
        clrscr();
        printf("VOCE ESCOLHEU O TCHEBAGUAL\n\n");
        delay(2000);
        clrscr();
        printf("SEJA BEM VINDO AO TCHEBAGUAL\n\n");
        InserirNumerosDigitadosNoTcheBagual();
        delay(2000);
        MostrarNumerosDigitadosNoTcheBagual();

    }

}

