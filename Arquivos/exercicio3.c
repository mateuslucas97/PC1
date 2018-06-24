#include <stdio.h>

int main()
{
 char c;
  FILE *fp;
  fp=fopen("exemplo.txt","r");
  if(!fp)
  {
    printf("O que vc pensa que sta fazendo?");
    return 0;
  }
  c=fgetc(fp);

  while(!feof(fp))
  {
    printf("%c",c);
    c=fgetc(fp);
  }
  fclose(fp);
  return 0;
}
