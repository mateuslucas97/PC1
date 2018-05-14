#include <stdio.h>

void resposta(int x,int mat[3][3]);

int main()
{
    int i,j,x;
    int mat[3][3];
    printf("Digite os numeros da matriz:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&mat[i][j]);
    }
    printf("Digite o numero a ser procurado:\n");
    scanf("%d",&x);
    resposta(x,mat);
    return 0;
}

void resposta(int x,int mat[3][3])
{
    int i,j,resposta=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(mat[i][j]==x)
            {
                resposta++;
            }
        }
    }
    printf("Repeticoes: %d\n",resposta);
    printf("Posicoes:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(mat[i][j]==x)
            printf("(%d, %d)\n",i,j);
        }
    }
}
