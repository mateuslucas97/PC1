#include <stdio.h>
#include <string.h>

int main()
{
  char frase[50];
  int tamanho,i;
  puts("Digite uma frase:");
  fgets(frase,50,stdin);
  tamanho=strlen(frase);
  for(i=tamanho-1;i>=0;i--)
  {
    if(frase[i]=='b' || frase[i]== 'c' || frase[i]== 'd' || frase[i]== 'f' || frase[i]== 'g' || frase[i]== 'h' || frase[i]== 'j' || frase[i]== 'k' || frase[i]== 'l' || frase[i]== 'm' || frase[i]== 'n' || frase[i]== 'p' || frase[i]== 'q' || frase[i]== 'r' || frase[i]== 's' || frase[i]== 't' || frase[i]== 'v' || frase[i]== 'w' || frase[i]== 'x' || frase[i]== 'y' || frase[i]== 'z')
    {
     frase[i]='#';
    }
    printf("%c",frase[i]);
  }
  return 0;
}
