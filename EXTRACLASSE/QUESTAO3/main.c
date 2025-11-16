#include <stdio.h>

	// Função que soma os dígitos do número
	int somar_digitos(int n) {
    int soma = 0;

    // Garante que o número é positivo
    if (n < 0) {
        n = -n;
    }

    // Enquanto ainda houver dígitos
    while (n != 0) {
        soma = soma + (n % 10);  // pega o último dígito
        n = n / 10;              // remove o dígito
    }

    return soma;
}

	int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("A soma dos digitos e: %d\n", somar_digitos(numero));

    return 0;
}
