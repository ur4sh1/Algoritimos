#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static void InsertionSort(int v[], int n){
	
	int i,j,key;
	
	for(i=0;i<n;i++){
		key = v[i];
		j =i-1;
		while(j>=0 && v[j] >key){
			v[j+1] = v[j];
			j = j-1;
		}
		v[j+1] = key;
		for(int k=0;k<n;k++){
			printf("[%d] ",v[k]);
		}
		printf("\n");
	}
	
}

main(){
	
	int v[]={3,1,2,4};
	int n = 4;
	
	printf("\n");
	
	InsertionSort(v,n);
	
	printf("\nFINAL");
	
	for(int k=0;k<n;k++){
		printf("[%d] ",v[k]);
	}
		
}
