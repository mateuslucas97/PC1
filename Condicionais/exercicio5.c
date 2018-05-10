#include <stdio.h>
int main()
{
    int x;
    printf("Digite a idade do nadador: "); scanf("%d", &x);

    if(x>=5 && x<=7)
    {
        printf("Infantil A\n");
    }
    else
        if(x>=8 && x<=10)
        {
            printf("Infantil B\n");
        }
        else
            if(x>=11  &&  x<=13)
            {
                printf("Juvenil A\n");
            }
            else
                if(x>=14 && x<=17)
                {
                    printf("Juvenil B\n");
                }
                else
                    if(x>=18)
                    {
                        printf("Sênior\n");
                    }
                    else
    return 0;
}