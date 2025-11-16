#include <stdio.h>

	// Função de soma
	float somar(float a, float b) {
    return a + b;
}

	// Função de subtração
	float subtrair(float a, float b) {
    return a - b;
}

	// Função de multiplicação
	float multiplicar(float a, float b) {
    return a * b;
}

	// Função de divisão
	float dividir(float a, float b) {
    return a / b;  // divisão já validada no main
}

	int main() {
    float n1, n2, resultado;
    int operacao;

    // Entrada dos números
    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    // Menu de escolha
    printf("\nEscolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &operacao);

    // Seleção da operação
    switch (operacao) {

        case 1:
            resultado = somar(n1, n2);
            printf("Resultado = %.2f\n", resultado);
            break;

        case 2:
            resultado = subtrair(n1, n2);
            printf("Resultado = %.2f\n", resultado);
            break;

        case 3:
            resultado = multiplicar(n1, n2);
            printf("Resultado = %.2f\n", resultado);
            break;

        case 4:
            // Verifica se divisor é zero
            if (n2 == 0) {
                printf("Erro! Nao e possivel dividir por zero.\n");
            } else {
                resultado = dividir(n1, n2);
                printf("Resultado = %.2f\n", resultado);
            }
            break;

        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}
