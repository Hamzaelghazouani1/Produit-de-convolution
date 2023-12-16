#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrice.h"

int ** get_random_matrice(int n){
    int **matrice = (int **)malloc(n*sizeof(int*));
    for(int i =0; i < n;i++)
        matrice[i] = (int *)malloc(n*sizeof(int));
    srand(time(0));  
    for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++)
			matrice[i][j] = rand()%256; 
	}
	return matrice;
}

void print_matrice(int **matrice,int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++)
            printf("\t%d\t|",matrice[i][j]);
        printf("\n");
    }
}

int trace_matrice(int** matrice,int taille){
    int trace = 0;
	for(int i = 0; i < taille ; i++)
		trace+=matrice[i][i];
	return trace;
}

void free_matrice(int **matrice,int taille){
    for(int i = 0;i<taille;i++)
        free(matrice[i]);
    free(matrice);
}