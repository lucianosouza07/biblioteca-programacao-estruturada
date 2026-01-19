#include "matematica_basica_pe_uneb.h"

float calcular_soma(float a, float b) {
	return a+b;
}

float calcular_media(float vetor[], int tamanho){
	int i;
	float soma = 0;
	for (i = 0; i < tamanho; i++){
		soma += vetor[i];
	}
	return soma/tamanho;
}

float calcular_percentual(float parte, float total) {
	return parte/total*100;
}

int inverter_numero(int numero) {
	int c = numero / 100, d = (numero - c) / 10, u = numero % 10;
	return u*100+d*10+c;
}

bool verificar_propriedade(int numero){
	int dp = numero / 100, du = numero - dp*100;
	if ((dp+du)*(dp+du) == numero) {
		return true;	
	}
	else {
		return false;
	}
}

bool eh_par(int numero){
	if (numero % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int encontrar_maximo_tres(int a, int b, int c){
	int i, j, maior, vet[] = {a,b,c};
	for (i = 0; i < 3; i++){
		for (j = i+1; j < 3; j++){
			if (vet[i] > vet[j]){
				maior = vet[i];
			}
		}
	}
	return maior;
}

float converter_velocidade(float valor, int tipo_conversao){
	switch(tipo_conversao) {
		case 1:
			valor = valor*3.6;
		case 2:
			valor = valor/3.6;
	}
	return valor;
}

float converter_moeda(float valor, float taxa_cambio){
	return valor*taxa_cambio;
}

int calcular_fatorial(int numero){
	int i, fat = 1;
	if (numero < 0){
		printf("ERRO: N mero negativo.");
		return 0;
	}
	if (numero == 0 || numero == 1){
		return 1;
	}
	for (i = 1; i < numero+1; i++){
		fat *= i; 
	}
	return fat;
}

bool eh_primo(int numero){
	int i, div = 0;
	if (numero < 1){
		printf("ERRO: N mero menor que 1. Por favor, insira um novo n mero");
		return false;
	}
	if (numero == 1){
		return false;
	}
	for(i = 2; i < numero/2+1; i++){
		if (numero % i == 0){
			div++;
		}
	}
	return (div == 0) ? true : false;
}

