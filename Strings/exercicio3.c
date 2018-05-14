#include <stdio.h>
#include <string.h>
void removeespacos(char frase[100]);

int main()
{
  char frase[100];
  printf("Digite uma frase: ");
  fgets(frase,100,stdin);
  removeespacos(frase);
  return 0;
}

void removeespacos(char frase[100])
{
 int i,j,cont=0;
 int len=strlen(frase);
 for(i=0,j=0;i<len;i++,j++)
 {
  if(frase[j]==' ')
  {
   j++;
  }
  frase[i]=frase[j];
 }
 printf("\n%s",frase);
 printf("%d caracteres",len);
}
