#include <stdio.h>

int main() {
    int idade;
    float rendamensal;
    int dependentes;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: \n");
    scanf("%f", &rendamensal);

    printf("Digite o número de dependentes: \n");
    scanf("%d", &dependentes);

    if (idade <= 18 || idade >= 60) {
        if (rendamensal < 2000) {
            if (dependentes > 2) {
                printf("Você atende a todos os critérios.\n");
            } else {
                printf("Você não tem direito ao desconto devido ao número de dependentes.\n");
            }
        } else {
            printf("Você não tem direito ao desconto devido à renda mensal ser superior a 2000 reais.\n");
        }
    } else {
        printf("Você não tem direito ao desconto devido à idade.\n");
    }

    return 0;
}
