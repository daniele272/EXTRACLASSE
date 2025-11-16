#include <stdio.h>

	// Função que calcula a média dos valores do vetor
	float calcular_media(int v[]) {
    int i;
    int soma = 0;

    // Soma todos os valores
    for (i = 0; i < 10; i++) {
        soma += v[i];
    }

    // Retorna a média como float
    return soma / 10.0;
}

// Função que retorna o maior valor do vetor
int encontrar_maior(int v[]) {
    int i;
    int maior = v[0];  // começa assumindo que o primeiro é o maior

    for (i = 1; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

	// Função que retorna o menor valor do vetor
	int encontrar_menor(int v[]) {
    int i;
    int menor = v[0];  // começa assumindo que o primeiro é o menor

    for (i = 1; i < 10; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
    }
    return menor;
}

	// Função que conta quantos elementos são pares
	int contar_pares(int v[]) {
    int i, contador = 0;

    // Verifica cada número
    for (i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            contador++;  // aumenta se for par
        }
    }

    return contador;
}

	int main() {
    int vetor[10];
    int i;

    // Lendo os valores do vetor
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Exibindo os resultados chamando cada função
    printf("\nMedia dos numeros: %.2f\n", calcular_media(vetor));
    printf("Maior numero: %d\n", encontrar_maior(vetor));
    printf("Menor numero: %d\n", encontrar_menor(vetor));
    printf("Quantidade de pares: %d\n", contar_pares(vetor));

    return 0;
}
