#include <stdio.h>
#include "./matrice/matrice.h"

int main(){
    int n = 4;
    int **matrice = get_random_matrice(n);
    print_matrice(matrice,n);
    printf("Trace de la matrice : %d\n",trace_matrice(matrice,n),1);
    return 0;
}