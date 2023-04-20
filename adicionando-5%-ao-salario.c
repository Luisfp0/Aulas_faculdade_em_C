// Fazer um programa em C que receba o salário de 10 pessoas e adicione ao total 5% de acréscimo ("Bônus"),
//  mostrar ao final o valor a ser pago ao funcionário.
#include <stdio.h>

int main()
{
  float quantFuncionarios = 10;
  float salario0;
  float salario1;
  float salario2;
  float salario3;
  float salario4;
  float salario5;
  float salario6;
  float salario7;
  float salario8;
  float salario9;
  int i;
  float aumento;
  float salarios[10] = {salario0, salario1, salario2, salario3, salario4, salario5, salario6, salario7, salario8, salario9};

  printf("-----Calculo de bônus de salário-----\n");
  for (i = 0; quantFuncionarios > i; i++)
  {
    printf("Digite o seu salário: R$");
    scanf("%f", &salarios[i]);
  }
  printf("O salário final com bonus são respectivamente:\n");
  for (i = 0; quantFuncionarios > i; i++)
  {
    aumento = (5 * salarios[i]) / 100;
    salarios[i] = salarios[i] + aumento;
    printf("R$%2.f\n", salarios[i]);
  }
}