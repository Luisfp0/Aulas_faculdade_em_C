int main()
{
    float peso;
    float altura;
    float imc;
    
    
    printf ("Digite o seu peso: (KG)");
    scanf ("%f", &peso);
    
    printf ("Digite a sua altura:");
    scanf ("%f",&altura);
    
    imc = peso / (altura * altura);
    
    printf ("O seu IMC é: ");
    printf ("%.2f \n",imc);
    
    if (imc < 18.5){
        printf ("Você está abaixo do peso !");
    }
        else if (imc > 18.5 & imc < 24.90) {
            printf ("Você está no peso ideial !");
    }
            else if (imc > 24.91 & imc < 29.99) {
                printf ("Levemente acima do peso.");
            }
                else if (imc > 30 & imc < 34.9) {
                    printf("Obesidade Grau I.");
                }
                    else if(imc > 34.9 & imc < 39.9) {
                        printf ("Obesidade Grau II.");
                    }
                        else printf ("Obesidade morbida.");
}