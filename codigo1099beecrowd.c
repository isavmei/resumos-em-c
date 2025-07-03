#include <stdio.h>

int leitor_de_impares(int entrada1, int entrada2) {
    int soma = 0;
    int novo_numero;

    if (entrada1 < entrada2) {
        novo_numero = entrada2 - 1;
        while (novo_numero > entrada1) {
            if (novo_numero % 2 != 0) {
                soma += novo_numero; 
            }
            novo_numero--;
        }
    } else {
        novo_numero = entrada1 - 1;
        while (novo_numero > entrada2) {
            if (novo_numero % 2 != 0) {
                soma += novo_numero;  
            }
            novo_numero--;
        }
    }

    return soma;
}

int main() {
    int casos;
    int entrada1, entrada2;
    int contador;

    scanf("%d", &casos);

    for (contador = 0; contador < casos; contador++) {
        scanf("%d %d", &entrada1, &entrada2);
        int resultado = leitor_de_impares(entrada1, entrada2);
        printf("%d\n", resultado);
    }

    return 0;
}
