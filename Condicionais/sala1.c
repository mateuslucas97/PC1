#include <stdio.h>
#include <math.h>

int main()
{
  int x;
  int res;

  printf("Digite um valor para x: ");
  scanf("%d", &x);

  if(x<=1)
  {
    printf("1");
  }
  else
    if(x<=2 && x<=3)
    printf("2");
    else
    if(x>2 && x<=3)
    {
      res=pow(x,2);
      printf("%d", res);
    }
    else
     if(x>3)
     {
      res=pow(x,3);
      printf("%d", res);
     }
     else
     return 0;
}
