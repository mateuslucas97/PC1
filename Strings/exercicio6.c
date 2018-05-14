#include <stdio.h>
#include <string.h>

int main()
{
 char frase[50],branco[50],a[50];
 int i,tamanho;
 int brancos=0,as=0;
 printf("digite uma frase: ");
 fgets(frase,50,stdin);
 tamanho=strlen(frase);
 for(i=0;i<tamanho;i++)
 {
   branco[i]=' ';
   a[i]='a';
 }
 for(i=0;i<tamanho;i++)
 {
   if(frase[i]==branco[i])
     brancos++;
   if(frase[i]==a[i])
     as++;
 }
  printf("A quantidade de espacos e %d\n A quantidade de 'a' e: %d",brancos,as);
  return 0;
}

