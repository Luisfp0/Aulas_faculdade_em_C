int main()
{
  int resp = 0;
  float salario = 0;
  float mediaSalario;
  int sexo = 0;
  int idade = 0;
  int xRodado = 1;
  int maiorIdade = 0;
  int menorIdade = 1000;
  int femeas = 0;
  float menorSalario = __FLT_MAX__;
  int idadeMenor = 0;
  int sexoMenor;

  printf("--------Pesquisa de habitantes--------\n");
  printf("Quer iniciar o programa ? 1=S 2=N\n");
  scanf("%d", &resp);

  while (resp == 1)
  {
    printf("Qual o seu salário ?\n");
    scanf("%f", &salario);

    mediaSalario = mediaSalario + salario;
    printf("Qual o seu sexo ? 1=M 2=F\n");
    scanf("%d", &sexo);
    if (sexo == 2)
    {
      femeas++;
    };

    printf("Qual a sua idade ?\n");
    scanf("%d", &idade);
    if (idade > maiorIdade)
    {
      maiorIdade = idade;
    };

    if (idade < menorIdade)
    {
      menorIdade = idade;
    };

    if (salario < menorSalario)
    {
      menorSalario = salario;
      idadeMenor = idade;
      sexoMenor = sexo;
    }

    printf("Deseja continuar ? 1=S 2=N\n");
    scanf("%d", &resp);
    if (resp == 1)
    {
      xRodado++;
    }
  }
  printf("A média do salário é: R$%.2f\n", mediaSalario / xRodado);
  printf("A maior idade é: %d anos.\n", maiorIdade);
  printf("A menor idade é: %d anos.\n", menorIdade);
  printf("A Quantidade de mulheres é: %d\n", femeas);
  printf("A pessoa com menor salário tem %d", idadeMenor);
  printf(" anos e é do sexo %d", sexoMenor);
}