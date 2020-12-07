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
                    printf("NUMERO JA EXISTE\n\n");
                    delay(2000);
                    printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                    printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                    scanf("%d",&tcheBagual.numerosDigitados[i]);
                    clrscr();

                }

           }while(tcheBagual.numerosDigitados[i] < 1 || tcheBagual.numerosDigitados[i] > 60 || tcheBagual.numerosDigitados[cont] == tcheBagual.numerosDigitados[i]);
           cont++;
        }
    }

}


void MostrarNumerosDigitadosNoTcheBagual()
{


}
