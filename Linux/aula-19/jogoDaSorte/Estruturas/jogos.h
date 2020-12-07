typedef struct TCHEBAGUAL{

    int numerosSorteados1[60];
    int numerosSorteados2[60];
    int numerosDigitados[30];
    int n1[30],n2[30];
};

struct TCHEBAGUAL tcheBagual;


void InserirNumerosDigitadosNoTcheBagual()
{
    int i=0,aux=0,cont=0;

    printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");

    for(i=0; i<30; i++)
    {
        printf("\n\nDIGITE O %d NUMERO : ",i + 1);
        scanf("%d",&tcheBagual.numerosDigitados[i]);

        while(cont < i)
        {
           do
           {
                if(tcheBagual.numerosDigitados[cont] == tcheBagual.numerosDigitados[i] || tcheBagual.numerosDigitados[i] < 1 || tcheBagual.numerosDigitados[i] > 60)
                {
                    clrscr();
                    printf("NUMERO NAO ENCONTRADO\n\n");
                    delay(2000);
                    printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                    printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                    scanf("%d",&tcheBagual.numerosDigitados[i]);
                    clrscr();

                }

           }while(tcheBagual.numerosDigitados[i] < 1 || tcheBagual.numerosDigitados[i] > 60 || tcheBagual.numerosDigitados[cont] == tcheBagual.numerosDigitados[i]);
           cont++;

           for(aux=0; aux < cont; aux++)
           {
                do
                {
                    if(tcheBagual.numerosDigitados[aux] == tcheBagual.numerosDigitados[cont])
                    {
                        clrscr();
                        printf("NUMERO JA EXISTE\n\n");
                        delay(2000);
                        printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                        printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                        scanf("%d",&tcheBagual.numerosDigitados[aux]);
                        clrscr();

                    }
                }while(tcheBagual.numerosDigitados[aux] == tcheBagual.numerosDigitados[cont]);
            }
        }
      if(tcheBagual.numerosDigitados[i] < 1 || tcheBagual.numerosDigitados[i] > 60)
        {
            do
            {
                clrscr();
                printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&tcheBagual.numerosDigitados[i]);
                clrscr();
            }while(tcheBagual.numerosDigitados[i] < 1 || tcheBagual.numerosDigitados[i] > 60);
        }
        else
        {
            continue;
        }
    }
    printf("\n\nO TCHEBAGUAL ESTA CONFERINDO A CARTELA\n\n");
    delay(2000);

}


void MostrarNumerosDigitadosNoTcheBagual()
{
    int l=0, k=0, j=0, x=0, aux=0, acertos = -1;

    printf("\n\nNUMEROS MARCADOS NA CARTELA VIRTUAL\n\n");

    for(l=0; l < 30; l++)
    {
        printf("[%d\n",tcheBagual.numerosDigitados[l]);
        printf("]");
        fflush(stdout);
    }

    delay(5000);
    printf("\n\nANALISANDO OS NUMEROS DIGITADOS\n\n");
    delay(2000);
    printf("\n\nSAINDO OS NUMEROS SORTEADOS DA CARTELA: \n\n");
    delay(5000);

    srand(time(NULL)); // confirmando que os numeros vão sair de forma aleatória

    for(l=0; l < 30; l++)
    tcheBagual.numerosSorteados1[l]=0; // estou obrigando novo valor se valor não existe


    for(j=0;j < 30; j++)
    {
        tcheBagual.numerosSorteados2[j] = rand() % 60;
        x=tcheBagual.numerosSorteados2[j];

        if(tcheBagual.numerosSorteados1[x] == 1) // ja existe ja foi usado
        {
            for(k=0;k<30; k++)
            {
                if(tcheBagual.numerosSorteados1[k] == 0) // não foi gerado ainda
                {
                    tcheBagual.numerosSorteados2[j] = k;
                    x=k;
                    break;
                }
            }
        }

        tcheBagual.numerosSorteados1[x] = 1; // estou obrigando novo valor se valor não existe
    }

    printf("\n\n\t\t\tNUMEROS SORTEADO\n\n");

    // COLOCA OS NUMEROS EM ORDEM CRESCENTE

    for(k = 0; k <= 28; k++)
        for(l = k + 1; l <= 29;l++)
        if(tcheBagual.numerosSorteados2[k] > tcheBagual.numerosSorteados2[l])
        {
            aux = tcheBagual.numerosSorteados2[k];
            tcheBagual.numerosSorteados2[k] = tcheBagual.numerosSorteados2[l];
            tcheBagual.numerosSorteados2[l] = aux;
        }

    for(j=0; j < 30; j++)
        if(tcheBagual.numerosSorteados2[j] == 0)
            tcheBagual.numerosSorteados2[j] = 1;
        else
        {
            printf("[ %d ]\n ",tcheBagual.numerosSorteados2[j]);
            fflush(stdout);
        }
   delay(5000);

     printf("\n\n\nRESULTADO FINAL\n\n\n");
     acertos=0;

    for(l=0; l < 30; l++)
    {
        for(j=0; j < 30; j++)
        {
            tcheBagual.n1[l] = tcheBagual.numerosDigitados[l];
            tcheBagual.n2[j] = tcheBagual.numerosSorteados2[j];

            if(tcheBagual.n1[l] == tcheBagual.n2[j])
            {
                if(acertos < 0)
                {
                    acertos=0;
                }
                acertos++;
            }
        }
    }

    if(acertos >= 20)
    {
      printf("\n\n\nVOCE GANHOU O JOGO DA SORTE PARABENS\n\n\n");
    }
    else
    {
      printf("\n\n\nVOCE PERDEU TUDO\n\n\n");
    }

    printf("ACERTOS: %d",acertos);
    printf("\n\n\n\n");
    delay(10000);
}
























