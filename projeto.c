#include <stdio.h>

#define MAX_PROJETOS 2

typedef struct {
    int numero;
    float saldo;
} Projeto;

int main() {
    Projeto projetos[MAX_PROJETOS];
    int num_projetos = 0;
    char tipo_despesa;
    int num_projeto;
    float valor_despesa;


    printf("Informe os dados do(s) projeto(s):\n");
    do {
        printf("Número do projeto (ou 0 para encerrar): ");
        scanf("%d", &num_projeto);
        if (num_projeto != 0) {
            projetos[num_projetos].numero = num_projeto;
            projetos[num_projetos].saldo = 0;
            num_projetos++;
        }
    } while (num_projeto != 0);

    printf("\nInforme as despesas e receitas:\n");
    do {
        printf("Número do projeto (ou 0 para encerrar): ");
        scanf("%d", &num_projeto);
        if (num_projeto != 0) {
            printf("Tipo de despesa (R para receita, D para despesa): ");
            scanf(" %c", &tipo_despesa);
            printf("Valor: ");
            scanf("%f", &valor_despesa);

            for (int i = 0; i < num_projetos; i++) {
                if (projetos[i].numero == num_projeto) {
                    if (tipo_despesa == 'R') {
                        projetos[i].saldo += valor_despesa;
                    } else if (tipo_despesa == 'D') {
                        projetos[i].saldo -= valor_despesa;
                    }
                }
            }
        }
    } while (num_projeto != 0);

    printf("\nSaldo final dos projetos:\n");
    for (int i = 0; i < num_projetos; i++) {
        printf("Projeto %d: %.2f\n", projetos[i].numero, projetos[i].saldo);
    }

    return 0;
}