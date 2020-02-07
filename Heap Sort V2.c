#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 7

void peneira(int *vet, int raiz, int fundo);

void heapsort(int *vet, int n) {
	int i, tmp, iaux;
	printf("%d : \n", n / 2);
	//monto a arvore
	for (i = (n / 2); i >= 0; i--) {
		peneira(vet, i, n - 1);
		for (iaux = 0; iaux < n; iaux++) {
			printf("%d ", vet[iaux]);
		}
		printf("\n--------------------\n");
	}
	//organiza a arvore
	for (i = n-1; i >= 1; i--) {
		tmp = vet[0];
		vet[0] = vet[i];
		vet[i] = tmp;
		peneira(vet, 0, i-1);
		
		for (iaux = 0; iaux < n; iaux++) {
			printf("%d ", vet[iaux]);
		}
		
		printf("\n--------------------\n");
	}
	
}

//cria na arvore
void peneira(int *vet, int raiz, int fundo) {
	int pronto, filhoMax, tmp;

	pronto = 0;
	while ((raiz*2 <= fundo) && (!pronto)) 
	{
		if (raiz*2 == fundo) {
			filhoMax = raiz * 2;
		}
		else if (vet[raiz * 2] > vet[raiz * 2 + 1]) {
			filhoMax = raiz * 2;
		}
		else {
			filhoMax = raiz * 2 + 1;
		}

		if (vet[raiz] < vet[filhoMax]) {
			tmp = vet[raiz];
			vet[raiz] = vet[filhoMax];
			vet[filhoMax] = tmp;
			raiz = filhoMax;
   		}
		else {
      		pronto = 1;
		}
	}
}

int main() {
	int vetor[max] = {40,90,20,10,50,70,80};
	int i;
	printf("Vetor original: ");
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
	heapsort(vetor,max);
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	return(0);
}
