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
}
