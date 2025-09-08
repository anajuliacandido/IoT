
#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digie a sua idade: "); // aqui colocara a sua idade
    scanf("%d", &idade);
    
    // e aqui mostrara se vc é muito novo adulto ou velho
    if (idade <18) {
    printf("você é muito novo");
    }
    
    if (idade >= 18 && idade <= 65) {
    printf("você é adulto");
    }
    
    if (idade >65) {
    printf("você é idoso");
    }
    
    return 0;
}
