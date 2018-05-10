#include <stdio.h>

int main()
{
 int a;
 printf("digite um numero referente a um mes: ");
 scanf("%d", &a);

 switch(a)
 {
   case 1 : printf("Janeiro com 31 dias\n");
              break;
   case 2 : printf("Fevereiro com 28 dias,normalmente\n");
              break;
   case 3 : printf("Março com 31 dias\n");
              break;
   case 4 : printf("Abril com 30 dias\"");
              break;
   case 5 : printf("Maio com 31 dias\n");
              break;
   case 6 : printf("Junho com 30 dias\n");
              break;
   case 7 : printf("Julho com 31 dias\n");
              break;
   case 8 : printf("Agosto com 31 dias\n");
              break;
   case 9 : printf("Setembro com 30 dias\n");
              break;
   case 10 : printf("Outubro com 31 dias\n");
               break;
   case 11 : printf("Novembro com 30 dias\n");
               break;
   case 12 : printf("Dezembro com 31 dias\n");
               break;

   default: printf("Mes Invalido\n");
 }
 return 0;
}
