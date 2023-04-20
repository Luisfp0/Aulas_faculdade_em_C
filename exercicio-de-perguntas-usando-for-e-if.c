//Uma cidade quer coletar os dados de seus moradores, para isso ela quer saber 
//em uma quantidade de 10 moradores qual a média das idades, qual a quantidade 
//de mulheres e qual a quantidade de homens.
int main() {
    int idade;
    int contador;
    int idadeResp;
    char respSexo;
    int homens;
    int mulheres;
    
    
    
    printf("-----Censo de Goiânia-----\n");
    
    for  (contador = 0; 10 > contador; contador++) {
        printf ("Qual a sua idade ?\n");
        scanf ("%d", &idadeResp);
        
        idade = (idade + idadeResp);
        
        printf ("Digite o sexo do morador: M/F\n");
        scanf ("%s", &respSexo);
        
        if (respSexo == 'M'){
            homens ++;
        }
            else if (respSexo == 'F'){
                mulheres ++;
            }
                else  printf ("Resposta invalida, dado não contabiliazdo !\n");
    }
    
    
    printf ("A média de idade de todas as pessoas é de: %d \n", idade/10);
    printf ("A quantidade de homens é de: %d \n", homens);
    printf ("A quantidade de mulheres é de: %d \n", mulheres);
    
}