#include <stdio.h>
#include <math.h>
int main()
{
  int x;
  int potencia;
  printf("Digite um mun: ");
  scanf("%d", &x);

  if(x<=1)
  {
    printf("%d", x);
  }
  else
   if(x>1 && x<=2)
   {
     printf("2");
   }
   else
    if(x>2 && x>=3)
    {
      potencia=pow(x,2);
      printf("%d", potencia);
    }
    else
     if(x>3)
     {
       potencia=pow(x,3);
       printf("%d", potencia);
     }
     else
     return 0;
}
