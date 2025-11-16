#include <stdio.h>

	// Função que verifica se o ano é bissexto
	int ano_bissexto(int ano) {

    // Regra 1: se é divisível por 400 → é bissexto
    if (ano % 400 == 0) {
        return 1;
    }

    // Regra 2: se é divisível por 4 e não por 100 → também é bissexto
    if (ano % 4 == 0 && ano % 100 != 0) {
        return 1;
    }

    // Se não passou por nenhuma regra, então não é bissexto
    return 0;
}

	int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Testa o ano chamando a função
    if (ano_bissexto(ano) == 1) {
        printf("%d e bissexto.\n", ano);
    } else {
        printf("%d NAO e bissexto.\n", ano);
    }

    return 0;
}
