#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int n, float *media, float *desvio) {
    float soma = 0.0, somaDesvio = 0.0;
    int i;

    for (i = 0; i < n; i++) {
        soma += notas[i];
    }
    *media = soma / n;

    for (i = 0; i < n; i++) {
        somaDesvio += pow(notas[i] - *media, 2);
    }
    *desvio = sqrt(somaDesvio / n);
}

int main() {
    int n, i;
    float *notas, media, desvio;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n);

    notas = (float*) malloc(n * sizeof(float));


    printf("Digite as notas dos %d alunos:\n", n);
    for (i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    mediaDesvio(notas, n, &media, &desvio);

    printf("A media das notas e: %.2f\n", media);
    printf("O desvio padrao das notas e: %.2f\n", desvio);


    free(notas);

    return 0;
}