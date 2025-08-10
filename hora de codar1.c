#include <stdio.h>

int main () {
    float temperatura, umidade;
    unsigned int estoque, estoquemin = 1000;


    printf("entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30)
    {printf("A temperatura está alta\n");
        /* code */
    } else{
        printf("temperatura está dentro dos parâmetros\n");
    }
    if (umidade > 50)
    {  printf("A umidade está alta\n");    /* code */

    } else{
        printf("A umidade está dentro dos padrões\n");
    }
    if (estoque < estoquemin)
    {  printf("estoque abaixo do minímo\n");
        /* code */
    } else{
        printf("estoque normal");
    }
    return 0;
    
    
    





}