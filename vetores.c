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

#include <stdio.h>
#include <math.h>

void ex16() {
    float alturas[50];
    int sexos[50];
    float soma = 0, somaMulheres = 0;
    int countMulheres = 0;
    float maior = 0, menor = 9999;
    
    for (int i = 0; i < 50; i++) {
        printf("Digite a altura e o sexo (1=Masculino, 2=Feminino) do aluno %d: ", i + 1);
        scanf("%f %d", &alturas[i], &sexos[i]);
        soma += alturas[i];
        
        if (alturas[i] > maior) maior = alturas[i];
        if (alturas[i] < menor) menor = alturas[i];
        
        if (sexos[i] == 2) {
            somaMulheres += alturas[i];
            countMulheres++;
        }
    }
    
    float mediaTurma = soma / 50;
    float mediaMulheres = somaMulheres / countMulheres;
    
    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Mulheres com altura acima da média das mulheres (%.2f):\n", mediaMulheres);
    for (int i = 0; i < 50; i++) {
        if (sexos[i] == 2 && alturas[i] > mediaMulheres) {
            printf("%.2f ", alturas[i]);
        }
    }
    printf("\nPessoas com altura abaixo da média da turma (%.2f):\n", mediaTurma);
    for (int i = 0; i < 50; i++) {
        if (alturas[i] < mediaTurma) {
            printf("%.2f ", alturas[i]);
        }
    }
    printf("\n");
}

void ex17() {
    int numeros[50];
    int somaPares = 0, countPares = 0;
    int somaImpares = 0, countImpares = 0;
    int maiorPar = -1, menorImpar = 9999;
    
    for (int i = 0; i < 50; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            countPares++;
            if (numeros[i] > maiorPar) maiorPar = numeros[i];
        } else {
            somaImpares += numeros[i];
            countImpares++;
            if (numeros[i] < menorImpar) menorImpar = numeros[i];
        }
    }
    
    float mediaPar = somaPares / (float)countPares;
    float mediaImpar = somaImpares / (float)countImpares;
    
    printf("Média dos pares: %.2f\n", mediaPar);
    printf("Média dos ímpares: %.2f\n", mediaImpar);
    printf("Maior número par: %d\n", maiorPar);
    printf("Menor número ímpar: %d\n", menorImpar);
    printf("Pares maiores que a média par:\n");
    for (int i = 0; i < 50; i++) {
        if (numeros[i] % 2 == 0 && numeros[i] > mediaPar) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\nÍmpares menores que a média ímpar:\n");
    for (int i = 0; i < 50; i++) {
        if (numeros[i] % 2 != 0 && numeros[i] < mediaImpar) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
}

void ex18() {
    float temperaturas[121];
    float soma = 0, menor = 40, maior = 15;
    int countAbaixoMedia = 0;
    
    for (int i = 0; i < 121; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        
        soma += temperaturas[i];
        if (temperaturas[i] < menor) menor = temperaturas[i];
        if (temperaturas[i] > maior) maior = temperaturas[i];
    }
    
    float media = soma / 121;
    printf("Menor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Temperatura média: %.2f\n", media);
    
    for (int i = 0; i < 121; i++) {
        if (temperaturas[i] < media) countAbaixoMedia++;
    }
    printf("Dias com temperatura abaixo da média: %d\n", countAbaixoMedia);
}

void ex19() {
    float preco[100], quantidade[100], faturamento = 0;
    
    for (int i = 0; i < 100; i++) {
        printf("Digite o preço e a quantidade vendida da mercadoria %d: ", i + 1);
        scanf("%f %f", &preco[i], &quantidade[i]);
        faturamento += preco[i] * quantidade[i];
    }
    
    printf("Faturamento mensal do armazém: %.2f\n", faturamento);
    #include <stdio.h>
#include <math.h>

void ex16() {
    float alturas[50];
    int sexos[50];
    float soma = 0, somaMulheres = 0;
    int countMulheres = 0;
    float maior = 0, menor = 9999;
    
    for (int i = 0; i < 50; i++) {
        printf("Digite a altura e o sexo (1=Masculino, 2=Feminino) do aluno %d: ", i + 1);
        scanf("%f %d", &alturas[i], &sexos[i]);
        soma += alturas[i];
        
        if (alturas[i] > maior) maior = alturas[i];
        if (alturas[i] < menor) menor = alturas[i];
        
        if (sexos[i] == 2) {
            somaMulheres += alturas[i];
            countMulheres++;
        }
    }
    
    float mediaTurma = soma / 50;
    float mediaMulheres = somaMulheres / countMulheres;
    
    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Mulheres com altura acima da média das mulheres (%.2f):\n", mediaMulheres);
    for (int i = 0; i < 50; i++) {
        if (sexos[i] == 2 && alturas[i] > mediaMulheres) {
            printf("%.2f ", alturas[i]);
        }
    }
    printf("\nPessoas com altura abaixo da média da turma (%.2f):\n", mediaTurma);
    for (int i = 0; i < 50; i++) {
        if (alturas[i] < mediaTurma) {
            printf("%.2f ", alturas[i]);
        }
    }
    printf("\n");
}

void ex17() {
    int numeros[50];
    int somaPares = 0, countPares = 0;
    int somaImpares = 0, countImpares = 0;
    int maiorPar = -1, menorImpar = 9999;
    
    for (int i = 0; i < 50; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            countPares++;
            if (numeros[i] > maiorPar) maiorPar = numeros[i];
        } else {
            somaImpares += numeros[i];
            countImpares++;
            if (numeros[i] < menorImpar) menorImpar = numeros[i];
        }
    }
    
    float mediaPar = somaPares / (float)countPares;
    float mediaImpar = somaImpares / (float)countImpares;
    
    printf("Média dos pares: %.2f\n", mediaPar);
    printf("Média dos ímpares: %.2f\n", mediaImpar);
    printf("Maior número par: %d\n", maiorPar);
    printf("Menor número ímpar: %d\n", menorImpar);
    printf("Pares maiores que a média par:\n");
    for (int i = 0; i < 50; i++) {
        if (numeros[i] % 2 == 0 && numeros[i] > mediaPar) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\nÍmpares menores que a média ímpar:\n");
    for (int i = 0; i < 50; i++) {
        if (numeros[i] % 2 != 0 && numeros[i] < mediaImpar) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
}

void ex18() {
    float temperaturas[121];
    float soma = 0, menor = 40, maior = 15;
    int countAbaixoMedia = 0;
    
    for (int i = 0; i < 121; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        
        soma += temperaturas[i];
        if (temperaturas[i] < menor) menor = temperaturas[i];
        if (temperaturas[i] > maior) maior = temperaturas[i];
    }
    
    float media = soma / 121;
    printf("Menor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Temperatura média: %.2f\n", media);
    
    for (int i = 0; i < 121; i++) {
        if (temperaturas[i] < media) countAbaixoMedia++;
    }
    printf("Dias com temperatura abaixo da média: %d\n", countAbaixoMedia);
}

void ex19() {

    float preco[100], quantidade[100], faturamento = 0;
    
    for (int i = 0; i < 100; i++) {
        printf("Digite o preço e a quantidade vendida da mercadoria %d: ", i + 1);
        scanf("%f %f", &preco[i], &quantidade[i]);
        faturamento += preco[i] * quantidade[i];
    }
    
    printf("Faturamento mensal do armazém: %.2f\n", faturamento);
    