#include <stdio.h>
#include <string.h>

int main()
{
  int d,m,a;
  printf("Digite uma data: ");
  scanf("%d/%d/%d",&d,&m,&a);
  switch(m)
  {
    case 01:printf("%d/JANEIRO/%d",d,a);break;
    case 02:printf("%d/FEVEREIRO/%d",d,a);break;
    case 03:printf("%d/MARÇO/%d",d,a);break;
    case 04:printf("%d/ABRIL/%d",d,a);break;
    case 05:printf("%d/MAIO/%d",d,a);break;
    case 06:printf("%d/JUNHO/%d",d,a);break;
    case 07:printf("%d/JULHO/%d",d,a);break;
    case 8:printf("%d/AGOSTO/%d",d,a);break;
    case 9:printf("%d/SETEMBRO/%d",d,a);break;
    case 10:printf("%d/OUTUBRO/%d",d,a);break;
    case 11:printf("%d/NOVEMBRO/%d",d,a);break;
    case 12:printf("%d/DEZEMBRO/%d",d,a);break;
    default: printf("Esse mes nao existe");
  }
  return 0;
}
