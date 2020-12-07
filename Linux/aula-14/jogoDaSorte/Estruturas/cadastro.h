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
    CriarDiretorio();
    GravarArquivo();
    LerArquivo();
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

void CriarDiretorio()
{
    int diretorio[1];

    clrscr();

    printf("CRIANDO O SEU DIRETORIO DE DATABASE\n\n\n");
    delay(2000);

    diretorio[0] = mkdir("database",0777);

    if(diretorio[0] != -1)
    {
        printf("DIRETORIO CRIADO COM SUCESSO\n\n\n");
    }
    else
    {
        printf("O DIRETORIO JA EXISTE");
    }

    delay(2000);
}

void GravarArquivo()
{
    FILE *arquivo;

    arquivo = fopen("database/dados.txt","w");

    if(arquivo == NULL)
    {
        return 1;
    }
    else
    {
        fprintf(arquivo,"Codigo: ");
        fprintf(arquivo,"%d",cadastro.codigoCartela);
        fprintf(arquivo,"\n");
        fprintf(arquivo,"Nome: ");
        fprintf(arquivo,cadastro.nomeCompleto);
        fprintf(arquivo,"\n");
        fprintf(arquivo,"Email: ");
        fprintf(arquivo,cadastro.email);
        fprintf(arquivo,"\n");
        printf("\n\n\n\n");
        printf("ARQUIVO CRIADO COM SUCESSO");
        printf("\n\n\n\n");
        fclose(arquivo);
        delay(5000);
    }
}

void LerArquivo()
{
    FILE *arquivo;
    char palavras[1000];
      arquivo = fopen("database/dados.txt","r");

      if(arquivo == NULL)
      {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO");
        delay(2000);
        exit(0);
      }
      fflush(stdin);
    // fscanf(arquivo,"%i %s %s",&cadastro.codigoCartela,&cadastro.nomeCompleto,&cadastro.email);
     // printf("CODIGO:%i\nNOME COMPLETO:%s\nEMAIL:%s\n",cadastro.codigoCartela,cadastro.nomeCompleto,cadastro.email);

      while(fgets(palavras,1000,arquivo) != NULL)
      {
        printf("%s",palavras);
      }

      fflush(stdout);
      fclose(arquivo);
      delay(5000);
}










