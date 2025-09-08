
#include <stdio.h>

int main()
{
    float salario;
    float result;
    printf("Digite o seu salario: "); // aqui vc colocara o seu salario
    scanf("%f", &salario);
    \

    // e aqui sera mostrado o seu desconto salarial com base no salario bruto
    if (salario <= 600){
        printf("Seu desconto salarial é de: %.2f Reais", salario);
    }
    
    if (salario <= 1200 && salario > 600){
        result =( salario * 0.2);
        printf("Seu desconto salarial é de: %.2f Reais", result);
    }
    
    if (salario <=2000 && salario > 1200 ){
        result = (salario * 0.25);
        printf("Seu desconto salarial é de: %.2f Reais", result);
    }
    
    if (salario > 2000){
        result = (salario * 0.3);
        printf("Seu desconto salarial é de: %.2f Reais", result);
    }
    return 0;
}
