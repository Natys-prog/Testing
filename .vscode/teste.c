#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int op = 0;
    double a, b, resultado;

    while (op != 10) {
       // system("cls"); // Limpa a tela
        printf("Menu de opcoes:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Raiz de a + Raiz de b\n");
        printf("6 - Potencia de a elevada na b\n");
        printf("7 - Resto da divisao de a por b\n");
        printf("8 - Incremento de a + Incremento de b\n");
        printf("9 - Decremento de a * Decremento de b\n");
        printf("10 - Sair\n");

        printf("\nDigite a sua opcao: ");
        scanf("%d", &op);

        if (op == 10) {
            printf("Saindo...\n");
            break;
        }

        if (op >= 1 && op <= 9) {
            printf("\nEntre com o valor de a: ");
            scanf("%lf", &a);
            printf("Entre com o valor de b: ");
            scanf("%lf", &b);
        }

       // system("cls");

        if (op == 1) {
            resultado = a + b;
            printf("Soma: %.2f\n", resultado);
        } else if (op == 2) {
            resultado = a - b;
            printf("Subtracao: %.2f\n", resultado);
        } else if (op == 3) {
            resultado = a * b;
            printf("Multiplicacao: %.2f\n", resultado);
        } else if (op == 4) {
            if (b == 0) {
                printf("Erro: Divisao por zero nao permitida.\n");
            } else {
                resultado = a / b;
                printf("Divisao: %.2f\n", resultado);
            }
        } else if (op == 5) {
            resultado = sqrt(a) + sqrt(b);
            printf("Raiz de a + Raiz de b: %.2f\n", resultado);
        } else if (op == 6) {
            resultado = pow(a, b);
            printf("Potencia: %.2f\n", resultado);
        } else if (op == 7) {
            if ((int)b == 0) {
                printf("Erro: Divisao por zero nao permitida no resto.\n");
            } else {
                resultado = (int)a % (int)b;
                printf("Resto da divisao: %.0f\n", resultado);
            }
        } else if (op == 8) {
            a++;
            b++;
            resultado = a + b;
            printf("Incremento de a + Incremento de b: %.2f\n", resultado);
        } else if (op == 9) {
            a--;
            b--;
            resultado = a * b;
            printf("Decremento de a * Decremento de b: %.2f\n", resultado);
        } else {
            printf("Opcao invalida.\n");
        }

 
    }

    return 0;
}

