#include <stdio.h>

int main()
{
    int x;
    int maior,menor;
    printf("Digite varios numeros: ");
    scanf("%d", &x);
    maior=x;
    menor=x;

    while(x!=0)
    {
        if(x>0)
        {
            if(x>maior)
            {
                maior=x;
            }
                else
                    if(x<menor)
                    {
                        menor=x;
                    }
                }
else
printf("Valor invalido.\n");
printf("digite os valores:");
scanf("%d",&x);

    }
    printf("O maior valor digitado é: %d\"", maior);
    printf("O menor valor dgitado foi: %d\n", menor);
    return 0;
}


