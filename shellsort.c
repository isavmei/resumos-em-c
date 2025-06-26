#include <stdio.h>

void shellSort(int vetor[], int tamanho) {
    int gap, i, j, temp;

    for (gap = tamanho / 2; gap > 0; gap /= 2) {
        for (i = gap; i < tamanho; i++) {
            temp = vetor[i];
            for (j = i; j >= gap && vetor[j - gap] > temp; j -= gap) {
                vetor[j] = vetor[j - gap];
            }
            vetor[j] = temp;
        }
    }
}

int main() {
    int vetor[] = {23, 12, 1, 8, 34, 54, 2, 3};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor antes da ordenação:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    shellSort(vetor, n);

    printf("\nVetor após Shell Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
