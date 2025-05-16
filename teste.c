#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Nome: %s\nIdade: %d\nAltura: %.2f metros\n", nome, idade, altura);

    return 0;
}