
#include <stdio.h>
#define PT 3.14159
int main()
{
    printf("Hello World\n");
    
    float metros, cm, dc, ml;
    printf("Digite um numero em metros para conversão:  "); //aqui vc colocara um numero em metro para cobnversão
    scanf("%f", &metros);
    ml= metros * 1000;
    cm = metros * 100;
    dc = metros * 10;
    // aqui sera mostrado todas as converções
    printf("metros em milimetros = %f\n", ml );
    printf("metros em centimetros = %f\n", cm );
    printf("metros em decimeros = %f\n", dc );
    return 0;
}















