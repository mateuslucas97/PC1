#include <stdio.h>
 int main()
 {
  int a,b,n,s;
  printf("Digite um nº: "); scanf("%d", &a);
  printf("Digite um nº limite: "); scanf("%d", &b);
  printf("Digite a razão: "); scanf("%d", &n);

  s=(a+b)*n/2;
  printf("S= %d", s);
  return 0;
 }
