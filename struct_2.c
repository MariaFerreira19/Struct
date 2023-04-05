#include <stdio.h>
int main(void) {
    struct {

        int matricula;
        char nome[30];
        char dataNasc[11];
        char cargo[20];
        float salario;
    }func;
    
printf("Digite a matricula: ");
scanf("%d", &func.matricula);
printf("\nDigite o nome: ");
fgets(func.nome, 30, stdin);
printf("\nDigite a data de nascimento: ");
fgets(func.dataNasc, 11, stdin);
printf("\nDigite o cargo: ");
fgets(func.cargo, 20, stdin);
printf("\nDigite o salario: ");
scanf("%f", &func.salario);

printf("\nMatricula: %d", func.matricula);
printf("\nFuncionario: %s", func.nome);
printf("\nData de nascimento: %s", func.dataNasc);
printf("\nCargo: %s", func.cargo);
printf("\nSalario: %f", func.salario);

}