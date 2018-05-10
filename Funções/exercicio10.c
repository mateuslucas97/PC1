#include <stdio.h>

float altura(float g,float v,float tempo);
float velocidade(float g,float ,float tempo);
void imprime(float altura,float velocidade,float v);

int main()
{
  float t;
  float g,v,tempo;
  printf("Digite a aceleracao da gravidade: "); scanf("%f",&g);
  printf("Digite a velocidade inicial: "); scanf("%f",&v);
  printf("Digite um instante em especifico: "); scanf("%f",&t);
  printf("Digite o tempo: "); scanf("%f",&tempo);

  imprime(t,velocidade(g,v,tempo),altura(g,v,tempo));
  return 0;
}

float altura(float g,float v,float tempo)
{
  float h;
  h=(v*tempo)-(g*tempo*tempo*0.5);
  return h;
}

float velocidade(float g,float v,float tempo)
{
  float vf;
  vf=v-(g*tempo);
  return vf;
}

void imprime(float altura, float velocidade,float t)
{
  printf("A velocidade da bola no instante %f é %f e a altura é %f\n",t,velocidade,altura);
}
