#include <stdio.h>

int main()
{
  int hextra,hfalta;
  int H;

  printf("Digite as horas extras, em minutos: ");
  scanf("%d", &hextra);
  printf("Digite as horas faltas, em mnutos: ");
  scanf("%d", &hfalta);

  H=hextra-(2/3*(hfalta));

  if(H>2400)
  {
    printf("Premio: R$500,00");
  }
  else
  if(H>=1800 && H<=2400)
  {
    printf("Premio: R$400,00");
  }
  else
  if
  (H>=1200 && H<180)
  {
    printf("Premio: R$300,00");
  }
  else
  if(H>=600 && H<1200)
  {
    printf("Premio: R$200,00");
  }
  else
  if(H<600)
  {
    printf("Premio: R$100,00");
  }
  return 0;
}
