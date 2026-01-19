#include "entrada_saida_pe_uneb.h"

float calcular_media_interativa(){
	int t, i = 1;
	float n, soma = 0;
	bool terminou = false;
	while (terminou == false) {
		printf("Digite o %d° número: ", i);
		scanf("%f", &n);
		soma += n;
		while (terminou == false) {
			printf("Deseja continuar?\n1 - Sim\n2 - Não\n:");
			scanf("%d", &t);
			switch(t){
				case 1:
					i++;
					break;
				case 2:
					terminou = true;
				default:
					printf("Número inválido. Por favor, insira 1 ou 2");			
			}
		}
	}
	return soma/i;
}

int encontrar_menor_valor_inserido(){
	int i = 1, n = -1, m = 0;
	while (n != 0){
		printf("Digite o %d° número: ", i);
		scanf("%d", &n);
		if (n < m && n != 0){
			m = n;
		}
		i += 1;
	}
	return m;
}

int numero_igual_primeiro(){
	int inicial, n = 0, i = 0;
	printf("Digite o número inicial: ");
	scanf("%d", &inicial);
	while (n != inicial || 1 == -1){
		printf("Digite o %d° número: ", i+1);
		scanf("%d", &n);
		i += 1;
	}
	return i;
}

void contar_pares_impares(int *numpar, int *numimpar){
	int i = 1, n = 0;
	while (n != -1){
		printf("Digite o %d° número: ", i);
		scanf("%d", &n);
		if (n > 0){
			if (n % 2 == 0){
				numpar++;
			}
			else{
				numimpar++;
			}
		}
	}
}

