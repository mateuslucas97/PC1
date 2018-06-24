#include <stdio.h>

typedef struct f
{
  char nome[100];
  int  codigo;
  float salario;
  char cargo[100];
}Funcionario;

void cadastra(Funcionario *f)
{
  printf("Digite o codigo do funcionario: ");
  scanf("%d%*c",&f->codigo);
  printf("Digite o nome: ");
  fgets(f->nome,100,stdin);
  printf("Digite o salario: ");
  scanf("%f%*c",&f->salario);
  printf("Digite o cargo: ");
  fgets(f->cargo,100,stdin);
}

void exibe(Funcionario f)
{
  printf("Codigo: %d\n",f.codigo);
  printf("Nome: %s\n",f.nome);
  printf("Salario: %.1f\n",f.salario);
  printf("Cargo: %s",f.cargo);
}

int main()
{
  int i;
  Funcionario f[20];
  for(i=0;i<20;i++)
  {
    cadastra(&f[i]);
    printf("\n");
  }
  printf("\n");
  printf("************************\n");
  printf("Funcionarios da empresa:\n");
  printf("************************\n");
  printf("\n");
  for(i=0;i<20;i++)
  {
    exibe(f[i]);
    printf("\n");
  }
  return 0;
}
