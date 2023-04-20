// Uma faculdade quer fazer um programa em "C" que utilize condição de parada, ele deve receber se tem veículo próprio [SIM/NÃO] e cidade onde mora em uma
// lista de 4 cidades (Goiânia, Trindade, Aparecida e Canedo). Ao final, deverá retornar a quantidade de pessoas que não possuem veículos para cada cidade,
// para que possa formar parcerias com empresas de transporte.

#include <stdio.h>

int main()
{
  int resp;
  int respCidade;
  float respVeiculo;
  int goiania = 0;
  int trindade = 0;
  int aparecida = 0;
  int canedo = 0;

  printf("--Pesquisa rápida para empresas de transporte--\n");
  printf("Deseja iniciar o programa ? 1=S 2=N\n");
  scanf("%d", &resp);

  while (resp == 1)
  {
    printf("Você possui veículo próprio ? 1=S 2=N\n");
    scanf("%f", &respVeiculo);
    printf("Em qual cidade você mora ? 1=Goiânia 2=Trindade 3=Aparecida 4=Canedo\n");
    scanf("%d", &respCidade);
    printf("Deseja continuar ? 1=S 2=N\n");
    scanf("%d", &resp);
    if (respVeiculo == 2)
    {
      if (respCidade == 1)
      {
        goiania++;
      }
      if (respCidade == 2)
      {
        trindade++;
      }
      if (respCidade == 3)
      {
        aparecida++;
      }
      if (respCidade == 4)
      {
        canedo++;
      }
    }
  }
  printf("Pessoas que não tem carro em Goiânia:%d\n", goiania);
  printf("Pessoas que não tem carro em Trindade:%d\n", trindade);
  printf("Pessoas que não tem carro em Aparecida:%d\n", aparecida);
  printf("Pessoas que não tem carro em Canedo:%d\n", canedo);
}