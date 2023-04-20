// Fazer um programa em "C" que faça uma pesquisa com uma quantidade indefinida de pessoas.
// Ele fará a seguinte pergunta: Qual é o melhor lanche?
//
//  1 - Pizza Hut
//  2 - McDonalds
//  3 - Burguer King
//
// Ao final retornar a porcentagem de pessoas que votou para cada tipo de lanche.

#include <stdio.h>

int main()
{
  int resp;
  float respLanche;
  float pizzaHut;
  float mcDonalds;
  float BK;
  float somaResp;
  float porcPizzaHut;
  float porcmcDonalds;
  float porcBK;
  printf("-----Descobrindo qual o melhor lanche-----\n");
  printf("Deseja iniciar o programa ? 1=S 2=N\n");
  scanf("%d", &resp);

  while (resp == 1)
  {
    printf("Qual desses lanches você prefere ? 1=PizzaHut 2=McDonalds 3=BurgerKing\n");
    scanf("%f", &respLanche);
    if (respLanche == 1)
    {
      pizzaHut++;
    }
    if (respLanche == 2)
    {
      mcDonalds++;
    }
    if (respLanche == 3)
    {
      BK++;
    }
    printf("Deseja continuar ? 1=S 2=N\n");
    scanf("%d", &resp);
  }
  somaResp = pizzaHut + mcDonalds + BK;
  printf("O número de pessoas intrevistadas foi de: %2.f\n", somaResp);
  porcPizzaHut = (pizzaHut / somaResp) * 100;
  porcmcDonalds = (mcDonalds / somaResp) * 100;
  porcBK = (BK / somaResp) * 100;
  printf("PizzaHut: %2.f", porcPizzaHut);
  printf(" porcento.\n");
  printf("mcDonalds: %2.f", porcmcDonalds);
  printf(" porcento.\n");
  printf("BurgerKing: %2.f", porcBK);
  printf(" porcento.\n");
}