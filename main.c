/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char op;
    float num1, num2, resultado;
    
    do {
        printf("Calculadora simples\n");
        printf("Digite a operação desejada (+, -, *, /) ou s para sair: ");
        scanf(" %c", &op);
        
        if (op != 's') {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            
            switch (op) {
                case '+':
                    resultado = num1 + num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case '-':
                    resultado = num1 - num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case '*':
                    resultado = num1 * num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case '/':
                    if (num2 == 0) {
                        printf("Erro: Divisão por zero.\n");
                    } else {
                        resultado = num1 / num2;
                        printf("Resultado: %.2f\n", resultado);
                    }
                    break;
                default:
                    printf("Operação inválida.\n");
                    break;
            }
        }
    } while (op != 's');
    
    printf("Encerrando a calculadora.\n");
    
    return 0;
}
