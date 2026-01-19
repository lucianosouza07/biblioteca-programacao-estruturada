#include "vetores_pe_uneb.h"

int calcular_produto_vetor(int vetor[], int tamanho){
	int i, prod = 1;
	for(i = 0; i < tamanho; i++){
		prod *= vetor[i];
	}
	return prod;
}

void multiplicar_vetores(int vetor1[], int vetor2[], int resultado[], int tamanho){
	int i;
	for (i = 0; i < tamanho; i++){
		resultado[i] = vetor1[i]*vetor2[i];
	}
}

void intercalar_vetores(int vetor1[], int vetor2[], int resultado[], int tamanho){
	int i, final = (tamanho % 2 == 0) ? tamanho/2 : (tamanho-1)/2;
	for (i = 0; i < final; i++){
		resultado[2*i] = vetor1[i];
		resultado[2*i+1] = vetor2[i]; 
	}
}

int copiar_impares_para_vetor(int origem[], int destino[], int tamanho){
	int i, n = 0;
	for (i = 0; i < tamanho; i++){
		if (origem[i] % 2 == 1){
			destino[i] = origem[i];
			n++;
		}
	}
	return n;
}

void inverter_vetor(int vetor[], int tamanho){
	int i, k, temp;
	for (i = 0; i < tamanho-1; i++){
		for (k = i+1; k < tamanho; k++){
			temp = vetor[i];
			vetor[i] = vetor[k];
			vetor[k] = temp;	
		}
	}
}

int calcular_intersecao_vetores(int vetor1[], int vetor2[], int resultado[], int tamanho){
	int i, j, p = 0;
	for (i = 0; i < tamanho; i++){
		for (j = 0; j < tamanho; j++){
			if (vetor1[i] == vetor2[j]){
				resultado[p] = vetor1[i];
				p++;
			}
		}
	}
	return p;
}

void ordenar_bubble_sort(int vetor[], int tamanho) {
	int i, j, temp;
	for (i = 0; i < tamanho; i++) {
		for (j = i+1; j < tamanho; j++) {
			if (vetor[i] > vetor[j]) {
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
}

void lervetor(int vetor[], int tamanho, char nome_vetor) {
	int i;
	printf("--- %s ---\n", nome_vetor);
	for (i = 0; i < tamanho; i++) {
		printf("Digite o %dº elemento: ", i + 1);
		scanf("%d", &vetor[i]);
	}
}

void exibir_vetor(int vetor[], int tamanho, char nome_vetor) {
	int l;
	printf("--- %s ---\n", nome_vetor);
	for (l = 0; l < tamanho; l++) {
		printf("%d ", vetor[l]);
	}
}

int remover_duplicados(int origem[], int destino[], int tamanho) {
	int j, k, p = 0;
	bool foiencontra;
	for (j = 0; j<tamanho; j++) {
		for (k = 0; k<=p; k++) {
			foiencontra = false;
			if (origem[j] == destino[k]) {
				foiencontra = true;
				break;
			}
		}
		if (foiencontra == false) {
			destino[p] = origem[j];
			p++;
		}
	}
	return p;
}

void substituir_negativos_por_um(int vetor[], int tamanho) {
	int j;
	for (j = 0; j < tamanho; j++) {
		if (vetor[j] < 0) {
			vetor[j] = 1;
		}
	}
}

int buscar_valor_no_vetor(int valor, int vetor[], int tamanho) {
	int foiencontra = false, p, j;
	for (j = 0; j < tamanho; j++) {
		if (foiencontra == true){
			break;
		}
		if (vetor[j] == valor) {
			foiencontra = true;
			p = j;
		}
	}
	if (foiencontra == false) {
		printf("Valor não encontrado.");
		return false;
	}
	else {
		return p;
	} 
}

int encontrar_maximo_vetor(int vetor[], int tamanho){
	int i, j, maior;
	for (i = 0; i < tamanho; i++){
		for (j = i+1; j < tamanho; j++){
			if (vetor[i] > vetor[j]){
				maior = vetor[i];
			}
		}
	}
	return maior;
}

int encontrar_posicao_extremo(int tipo_extremo, int vetor[], int tamanho){
	int i, p = 0, maior = vetor[0], menor = vetor[0];
	switch(tipo_extremo){
		case 1:
			for(i = 1; i < tamanho; i++){
				if (vetor[0] > maior){
					maior = vetor[i];
					p = i;
				}	
			}
		case 2:
			for(i = 1; i < tamanho; i++){
				if (vetor[i] < menor){
					menor = vetor[i];
					p = i;
				}	
			}
		default:
			printf("Número inválido. Por favor, insira 1 ou 2");
			return 0;		
	}
	return p;
}

