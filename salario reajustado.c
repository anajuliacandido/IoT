
#include <stdio.h>

int main()
{
    int cargo;
    float sal, final;
  // aqui vc escolhera uma opção 
    printf("Codigo de cargo: \n1 - Auxiliar de escritorio \n2 - Secretario \n3 - Cozinheiro \n4 - Entregador \n");
  
  
    printf("Digite seu cargo atual: ");
    scanf("%d",  &cargo);
  //aqui colocara o seu salario
    printf("Digite seu salario atual: ");
    scanf("%f", &sal);
  
    // aqui mostrara o seu reajuste salarial
    switch(cargo) {
        case 1:
            final = (sal - sal * 0.07);
            printf("O salario reajustado é de: %.2f", final);
            break;
     
        case 2:
            final = (sal - sal * 0.09);
            printf("O salario reajustado é de: %.2f", final);
            break;
       
        case 3:
            final = (sal - sal * 0.05);
            printf("O salario reajustado é de: %.2f", final);
            break;
            
        case 4:
            final = (sal - sal * 0.12);
            printf("O salario reajustado é de: %.2f", final);
            break;
       }
    return 0;
}
