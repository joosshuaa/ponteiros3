#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    double **matriz1, **matriz2, **matrizResultado;

    printf("Digite a quantidade de linhas das matrizes: ");
    scanf("%d", &m);
    printf("Digite a quantidade de colunas das matrizes: ");
    scanf("%d", &n);

    matriz1 = (double**) malloc(m * sizeof(double*));
    matriz2 = (double**) malloc(m * sizeof(double*));
    matrizResultado = (double**) malloc(m * sizeof(double*));
    for (i = 0; i < m; i++) {
        matriz1[i] = (double*) malloc(n * sizeof(double));
        matriz2[i] = (double*) malloc(n * sizeof(double));
        matrizResultado[i] = (double*) malloc(n * sizeof(double));
    }

    printf("Digite os valores da matriz 1:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &matriz1[i][j]);
        }
    }
    printf("Digite os valores da matriz 2:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &matriz2[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("Matriz resultado:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2lf ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matrizResultado[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matrizResultado);

    return 0;
}
