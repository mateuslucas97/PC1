//este programa pede para preencher uma string de 10 letras
//calcula e mostra o numero de vogais
#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[11];
  int resultado=0;
  int i;
  printf("Digite uma palavra: \n");
  scanf("%s",palavra);

  for(i=0;i<=9;i++)
  {
    if(palavra[i]=='a' || palavra[i]=='A' || palavra[i]=='e' || palavra[i]=='E' || palavra[i]=='i' || palavra[i]=='I' || palavra[i]=='o' || palavra[i]=='O' || palavra[i]=='u' || palavra[i]=='U')
    resultado++;
  }
  printf("Numero de vogais: %d\n",resultado);
  return 0;
}
