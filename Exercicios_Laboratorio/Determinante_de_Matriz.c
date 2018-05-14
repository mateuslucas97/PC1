#include <stdio.h>

double Determinante3x3(double mat[][3]);

int main()
{
  double mat[3][3];
  int i,j;

  printf("Digite os numeros da matriz:\n");
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
      scanf("%lf",&mat[i][j]);
  }
  printf("Resultado = %.1lf",Determinante3x3(mat));
  return 0;
}

double Determinante3x3(double mat[][3])
{
    float r;
    r=(mat[0][0]*((mat[1][1]*mat[2][2])-(mat[1][2]*mat[2][1])));
    r=r-(mat[0][1]*((mat[1][0]*mat[2][2])-(mat[1][2]*mat[2][0])));
    r=r+(mat[0][2]*((mat[1][0]*mat[2][1])-(mat[1][1]*mat[2][0])));

    return r;
}
