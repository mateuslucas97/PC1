#include <stdio.h>
#include <math.h>

int main()
{
    int i,n;
    int potencia;
     printf("Digite um numero: ");
     scanf("%d", &n);
     i=0;

     while(i<=n)
     {
        potencia=pow(i,2);
        i++;
        printf("%3d", potencia);
     }
     return 0;
}
