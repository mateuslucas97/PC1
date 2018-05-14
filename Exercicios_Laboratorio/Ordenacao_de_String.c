//faca um programa que receba como parametro um vetor A com cinco
//caracteres e retorne esses caracteres em pordem alfabetica

#include <stdio.h>

void ordena(char A[],char B[]);

int main()
{
 char vetor_inicial[6],vetor_ordenado[6];
 printf("Digite 5 caracteres: ");
 fgets(vetor_inicial,6,stdin);
 ordena(vetor_inicial,vetor_ordenado);
 return 0;
}

void ordena(char A[],char B[])
{
 int aux,i,j;
 //copia o vetor A para o B
 for(i=0;i<6;i++)
 {
   B[i]=A[i];  //equivalente: strcpy(A,B);
 }
 //algoritmo padrao de ordenacao
 for(i=0;i<4;i++)
 {
   for(j=i+1;j<5;j++)
   {
     aux=B[i];
     B[i]=B[j];
     B[j]=aux;
   }
 }
 puts(B);
}
