#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static void SelectionSort(int v[], int n){
	
	for(int i=0;i<n-1;i++){
		//encontra o menor valor do vetor
		int menor_valor = i;
		
		for(int j=i+1;j<n;j++)
		{
			if(v[j] < v[menor_valor])
			{
				menor_valor = j;
			}
			
			//efetua a troca
			int aux = v[menor_valor];
			v[menor_valor]=v[i];
			v[i]=aux;
		
			for(int k=0;k<n;k++)
			{
				printf("[%d] ",v[k]);
			}
			
			printf("\n");
		}
	}	
}

main(){
	
	int v[]={4,2,5,3,1};
	int n = 5;
	
	printf("\n");
	
	SelectionSort(v,n);
	
	printf("\nFINAL");
	
	for(int k=0;k<n;k++){
		printf("[%d] ",v[k]);
	}
		
}
