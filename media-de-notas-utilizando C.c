int main()
{
    int contador;
    float quantM;
    float notas;
    float notaFinal;
    
    printf ("Quantas matérias você tem ? \n");
    scanf ("%f", &quantM);
    
    for (contador = 0; quantM > contador; contador++){
        printf ("Digite a nota: \n");
        scanf ("%f", &notas);
        notaFinal = notaFinal + notas;
    }
    
    printf ("A média das suas notas é de: %.1f", notaFinal/quantM);
}