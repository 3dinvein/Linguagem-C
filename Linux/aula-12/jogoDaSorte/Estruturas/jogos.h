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
    }

}


void MostrarNumerosDigitadosNoTcheBagual()
{


}
