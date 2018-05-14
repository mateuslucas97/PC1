#include <stdio.h>
#include <string.h>

int main()
{
 char palavra[20];
 int i,j,tamanho,cont=0;
 printf("Digite uma palavra: ");
 scanf("%s",palavra);
 tamanho=strlen(palavra);
 j=0;
 for(i=tamanho-1;i>=0;i--)
 {
    if(palavra[j]==palavra[i])
    cont++;
    j++;
 }
 if(cont==j)
 printf("Sim.");
 else
 printf("Nao.");
 return 0;
}
