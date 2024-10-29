#include <stdio.h>
#include <math.h>

void questao1() {
    int vetor[51];
    for (int i = 0; i <= 50; i++) {
        vetor[i] = i;
    }
    for (int i = 0; i <= 50; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao2() {
    int vetor[100];
    for (int i = 1; i <= 100; i++) {
        vetor[i - 1] = i;
    }
    for (int i = 0; i < 100; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao3() {
    int vetor[100];
    for (int i = 100; i >= 1; i--) {
        vetor[100 - i] = i;
    }
    for (int i = 0; i < 100; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao4() {
    int vetor[101];
    for (int i = 100; i <= 200; i++) {
        vetor[i - 100] = i;
    }
    for (int i = 0; i <= 100; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao5() {
    int vetor[101];
    for (int i = 200; i >= 100; i--) {
        vetor[200 - i] = i;
    }
    for (int i = 0; i <= 100; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao6() {
    int vetor[100];
    int index = 0;
    for (int i = 1; i <= 500; i++) {
        if (i % 5 == 0) {
            vetor[index++] = i;
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao7() {
    int vetor[50];
    int index = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            vetor[index++] = i;
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao8() {
    int vetor[100];
    int index = 0;
    for (int i = 1; index < 100; i++) {
        if (i % 2 != 0) {
            vetor[index++] = i;
        }
    }
    for (int i = 0; i < 100; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao9() {
    int vetor[10];
    int index = 0;
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            vetor[index++] = i * i;
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao10() {
    int vetor[50];
    int index = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            vetor[index++] = i;
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d\n", vetor[i]);
    }
}

void questao11() {
    float vetor[10];
    float numero;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        vetor[i] = numero / 2;
    }
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", vetor[i]);
    }
}

void questao12() {
    float vetor[10];
    float numero;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        vetor[i] = numero * numero;
    }
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", vetor[i]);
    }
}

void questao13() {
    float vetor[10];
    float numero;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        vetor[i] = numero * numero * numero;
    }
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", vetor[i]);
    }
}

void questao14() {
    float vetor[15];
    float numero;
    for (int i = 0; i < 15; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        if (numero < 0) {
            vetor[i] = -1;
        } else {
            vetor[i] = sqrt(numero);
        }
    }
    for (int i = 0; i < 15; i++) {
        printf("%.2f\n", vetor[i]);
    }
}

void questao15() {
    float alturas[10];
    float soma = 0, media;
    for (int i = 0; i < 10; i++) {
        printf("Digite a altura do atleta %d: ", i + 1);
        scanf("%f", &alturas[i]);
        soma += alturas[i];
    }
    media = soma / 10;
    printf("Alturas acima da media (%.2f):\n", media);
    for (int i = 0; i < 10; i++) {
        if (alturas[i] > media) {
            printf("%.2f\n", alturas[i]);
        }
    }
}

void questao16() {
    float alturas[50];
    int sexo[50];
    float somaAlturas = 0, somaAlturasMulheres = 0, mediaAlturas, mediaMulheres;
    int countMulheres = 0;
    float maiorAltura = 0, menorAltura = 1000;
    for (int i = 0; i < 50; i++) {
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &alturas[i]);
        printf("Digite o sexo da pessoa %d (1 - masculino, 2 - feminino): ", i + 1);
        scanf("%d", &sexo[i]);
        somaAlturas += alturas[i];
        if (sexo[i] == 2) {
            somaAlturasMulheres += alturas[i];
            countMulheres++;
        }
        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }
        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }
    }
    mediaAlturas = somaAlturas / 50;
    mediaMulheres = (countMulheres > 0) ? (somaAlturasMulheres / countMulheres) : 0;

    printf("Maior altura da turma: %.2f\n", maiorAltura);
    printf("Menor altura da turma: %.2f\n", menorAltura);
    printf("Mulheres com altura acima da media das mulheres (%.2f):\n", mediaMulheres);
    for (int i = 0; i < 50; i++) {
        if (sexo[i] == 2 && alturas[i] > mediaMulheres) {
            printf("%.2f\n", alturas[i]);
        }
    }
    printf("Pessoas com altura abaixo da media da turma (%.2f):\n", mediaAlturas);
    for (int i = 0; i < 50; i++) {
        if (alturas[i] < mediaAlturas) {
            printf("%.2f\n", alturas[i]);
        }
    }
}

void questao17() {
    int numeros[50];
    int somaPares = 0, somaImpares = 0, countPares = 0, countImpares = 0;
    int maiorPar = -1, menorImpar = 1001;
    for (int i = 0; i < 50; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            countPares++;
            if (numeros[i] > maiorPar) {
                maiorPar = numeros[i];
            }
        } else {
            somaImpares += numeros[i];
            countImpares++;
            if (numeros[i] < menorImpar) {
                menorImpar = numeros[i];
            }
        }
    }
    float mediaPares = (countPares > 0) ? (float)somaPares / countPares : 0;
    float mediaImpares = (countImpares > 0) ? (float)somaImpares / countImpares : 0;

    printf("Media dos pares: %.2f\n", mediaPares);
    printf("Media dos impares: %.2f\n", mediaImpares);
    printf("Maior numero par: %d\n", maiorPar);
    printf("Menor numero impar: %d\n", menorImpar);
    printf("Pares maiores que a media par:\n");
    for (int i = 0; i < 50; i++) {
        if (numeros[i] % 2 == 0 && numeros[i] > mediaPares) {
            printf("%d\n", numeros[i]);
        }
    }
    printf("Impares menores que a media impar:\n");
    for (int i = 0; i < 50; i++) {
        if (numeros[i] % 2 != 0 && numeros[i] < mediaImpares) {
            printf("%d\n", numeros[i]);
        }
    }
}

int main() {
    // questaoque queira();
    return 0;
}
