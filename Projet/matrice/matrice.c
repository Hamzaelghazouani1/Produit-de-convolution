#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrice.h"

typedef struct matrice{
    int taille;
    int **matrice;
}matrice;

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

int** border_matrice(int **matrice,int taille){
    int n_taille = (taille+2);
    int ** matriceBorder = (int**)malloc(n_taille*sizeof(int*));
    for(int i = 1;i<(taille+1);i++){
        for(int j = 0; j<n_taille;j++){
            if(j==0 || j == (n_taille-1)) matriceBorder[i][j] = 0;
            matriceBorder[i][j+1] = matrice[i-1][j];
        }
    }
    return matriceBorder;
}


void conv_matrice(int **matrice,int taille){
    int ** matriceConv = (int**)malloc(3*sizeof(int*));
    for(int i=0;i<taille;i++)
        matriceConv[i] = (int*)malloc(3*sizeof(int));
    
    for(int i = 0;i<taille;i++){
        
    }
}