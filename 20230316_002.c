#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int n) {
    int *vetor, i;
    vetor = (int*) malloc(n * sizeof(int));

    printf("Digite os valores do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    return vetor;
}

void maiorMenor(int *vetor, int n, int *maior, int *menor) {
    int i;

    *maior = vetor[0];
    *menor = vetor[0];

    for (i = 1; i < n; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int n, *vetor, maior, menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = alocaVetor(n);

    maiorMenor(vetor, n, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    free(vetor);

    return 0;
}