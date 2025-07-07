float nota(char c) {
    switch (c) {
        case 'W': return 1.0;
        case 'H': return 0.5;
        case 'Q': return 0.25;
        case 'E': return 0.125;
        case 'S': return 0.0625;
        case 'T': return 0.03125;
        case 'X': return 0.015625;
        default: return 0.0;
    }

    //verifica qual nota foi lida 
    // retorna 0.0 se não for uma nota válida;
}

int main() {
    char linha[210]; // um pouco maior que 200 para garantir segurança

    while (fgets(linha, sizeof(linha), stdin)) {
        if (linha[0] == '*') {
            break; // fim da entrada
        }
        //fgets le todos os algarismos do texto até o /0 final
        //sizeof -> tamanho todo do vetor
        //stdin -> ler do teclado quando ele digitar 

        int corretos = 0;
        float soma = 0.0;

        for (int i = 1; linha[i] != '\0'; i++) {
            if (linha[i] == '/') {
                if (soma >= 0.999 && soma <= 1.001) {
                    corretos++;
                }
                soma = 0.0; // começar a soma do próximo compasso
            } else {
                soma += nota(linha[i]);
            }
        }

        printf("%d\n", corretos);
    }

    return 0;
}