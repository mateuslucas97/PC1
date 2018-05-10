#include <stdio.h>
#include <stdlib.h>

int main()
{
  int destino;
  int retorno;
  float ida,volta;
  float total;
  printf("Digite o destino: ");
  printf("1.Manaus\n");
  printf("2.Salvador\n");
  printf("3.Palmas\n");
  printf("4.Gramado\n");
  scanf("%d", &destino);

  switch(destino)
  {
    case 1:printf("Ha retorno?(1 para sim e 2 para nao)");
           scanf("%d", &retorno);
           ida=500,00;
           volta=900,00;
           total=ida+volta;
           if(retorno==1)
           printf("Total: %2f", total);
           else
           if(retorno==2)
           printf("Total: %2f", ida);
           break;

    case 2:printf("Ha retorno?(1 para sim e 2 para nao)");
           scanf("%d", &retorno);
           ida=350,00;
           volta=650,00;
           total=ida+volta;
           if(retorno==1)
           printf("Total: %2f", total);
           else
           if(retorno==2)
           printf("Total: %2f", ida);
           break;
    case 3:printf("Ha retorno?(1 para sim e 2 para nao)");
           scanf("%d", &retorno);
           ida=350,00;
           volta=600,00;
           total=ida+volta;
           if(retorno==1)
           printf("Total: %2f", total);
           else
           if(retorno==2)
           printf("Total: %2f", ida);
           break;
    case 4:printf("Ha retorno?(1 para sim e 2 para nao)");
           scanf("%d", &retorno);
           ida=300,00;
           volta=550,00;
           total=ida+volta;
           if(retorno==1)
           printf("Total: %2f", total);
           else
           if(retorno==2)
           printf("Total: %2f", ida);
           break;
    default:printf("Valor invalido");
  }
  return 0;
}
