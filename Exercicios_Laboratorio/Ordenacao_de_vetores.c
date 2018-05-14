#include <stdio.h>

void Ordenacao(int vet[]);

int main()
{
  int vet[10];
  int i;
  printf("Digite dez numeros inteiros: ");
  for(i=0;i<10;i++)
    scanf("%d",&vet[i]);

  Ordenacao(vet);
  return 0;
}

void Ordenacao(int vet[])
{
    int i,j,k;
    int aux=0;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(vet[i]>vet[j])
            {
            aux=vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
            }


        }

    }
    printf("Vetor ordenado:");
    for (k=0;k<10;k++)
    {
     printf (" %d",vet[k]);
    }

}
