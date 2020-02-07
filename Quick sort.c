#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void QuickSort(int *a, int esquerda, int direita) {
    int i, j, x, y;
     
    i = esquerda;
    j = direita;
    x = a[(esquerda + direita) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < direita) {
            i++;
        }
        while(a[j] > x && j > esquerda) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esquerda) {
        QuickSort(a, esquerda, j);
    }
    if(i < direita) {
        QuickSort(a, i, direita);
    }
}

main(){
	
	int v[]={4,2,5,3,1};
	int n = 5;
	
	printf("\n");
	
	QuickSort(v,0,n-1);
	
	printf("\nFINAL");
	
	for(int k=0;k<n;k++){
		printf("[%d] ",v[k]);
	}
		
}
