typedef struct CADASTRO
{
    int codigoCartela;
    char nomeCompleto[101];
    char email[101];
};

struct CADASTRO cadastro;

void Preencher()
{
    clrscr();
    printf("\n\nCADASTRE O SEU JOGADOR: \n\n\n\n");

    printf("CADASTRE O SEU NOME COMPLETO: ");
    fflush(stdin);
    scanf("%s",cadastro.nomeCompleto[101]);
    my_gets(cadastro.nomeCompleto,101);

    printf("CADASTRE O SEU EMAIL: ");
    fflush(stdin);
    scanf("%s",cadastro.email[101]);
    my_gets(cadastro.email,101);

    printf("\n\nCADASTRADO COM SUCESSO\n\n");
    delay(1000);

    int numero1;
    NumeroDaCartela(numero1);
}

int NumeroDaCartela(int numero1)
{
    printf("\n\n");
    srand((unsigned)time(NULL));
    numero1 = rand() % 999999;
    printf("\n\nPOR FAVOR ANOTE O REGISTRO DE JOGADOR\n\n\n");
    delay(2000);
    printf("\n\nNUMERO DA CARTELA: %d\n\n\n",numero1);
    delay(5000);
    cadastro.codigoCartela = numero1;

    return numero1;
}

















