#include <stdio.h>

int main()
{
  int a,b,c;
  printf("Digite tres valores: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a<b && a<c)
    if(b<c)
    printf("%d %d %d",a,b,c);
    else
     printf("%d %d %d", a,c,b);
  if(b<a && b<c)
    if(a<c)
    printf("%d %d %d",b,a,c);
    else
     printf("%d %d %d",b,c,a);
  if(c<a && c<b)
    if(a<c)
    printf("%d %d %d",c,a,b);
    else
     printf("%d %d %d",c,b,a);
  return 0;
}