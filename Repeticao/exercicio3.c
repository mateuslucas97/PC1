#include <stdio.h>
int main()
{
  int n,i,primo;
  printf("Digite 10 números: ");
  scanf("%d\n", &n);

  for(i=1;i<=n;i++)
  {
    primo=0;
      if((n%i)==0)
      {
      printf("%d\n", i);
      primo++;
      }
  }
   printf("os numeros primos: %d\n", primo);
  return 0;
}
