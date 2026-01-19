#include "sequencias_pe_uneb.h"

void imprimir_tabuada(int numero){
	int i;
	printf("--- TABUADA DO NÚMERO %d ---\n", numero);
	for (i = 1; i < 11; i++){
		printf("%d x %d = %d\n", numero, i, numero*i);
	}
}

void imprimir_sequencia_fibonacci(int quantidade){
	int i, ant = 0, atual = 1, prox;
	printf("--- OS %d PRIMEIROS TERMOS DA SEQUÊNCIA DE FIBONACCI ---\n%d ", quantidade, atual);
	for (i = 0; i < quantidade-1; i++){
		prox = atual+ant;
		ant = atual;
		atual = prox;
		printf("%d ", prox);
	}
}

int somar_impares_intervalo(int inicio, int fim){
	int final, inicial, n;
	if (inicio % 2 == 0){
		inicial = inicio+1;
	}
	else {
		inicial = inicio;
	}
	if (fim % 2 == 0){
		final = fim-1;
	}
	else {
		final = fim;
	}
	n = (final-inicial)/2+1;
	return (inicial+final)*n/2;
}

