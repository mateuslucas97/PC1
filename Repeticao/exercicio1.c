#include <stdio.h>

int main()
{
    int N,i,divisor=0;
    printf("Digite um num: ");
    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
          printf("%d\n", i);
          divisor++;
        }
    }
    printf("Numero de divisores: %d\n", divisor);
    return 0;
}
