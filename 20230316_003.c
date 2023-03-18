#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j, **matriz;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &m);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &n);

    matriz = (int**) malloc(m * sizeof(int*));
    for (i = 0; i < m; i++) {
        matriz[i] = (int*) malloc(n * sizeof(int));
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matriz[i][j] = i * n + j + 1;
        }
    }

    printf("Valores da matriz (aritmetica de ponteiros):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", *(*(matriz + i) + j));
        }
        printf("\n");
    }

    printf("Valores da matriz (indexes):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
