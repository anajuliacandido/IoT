
#include <stdio.h>

int main()
{
    int num;
    
     printf("digite um numero: "); // aqui apessoa ira colocar o primeiro numero
     scanf("%i", &num);
     
     int num2;
     printf("digite um numero: "); // aqui apessoa ira colocar o segundo numero numero
     scanf("%i", &num2);
     
     float result = num + num2;
     if (result >= 10){
     printf("O resultado é maior que %f é maior que 10", result); // aqui sera mostrado se a soma for maior que 10
     }
     else;
     printf("Esse resultado não é maior que 10"); // aqui mostrara se for menor que 10
    return 0;
}
