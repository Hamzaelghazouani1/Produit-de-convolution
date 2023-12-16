#include <stdio.h>
#include "./matrice/matrice.h"

int main(){
    int n = 4;
    int **matrice = get_random_matrice(n);
    print_matrice(matrice,n);
    print_matrice(border_matrice(matrice,n),n+2);
    printf("Trace de la matrice : %d\n",trace_matrice(matrice,n));
    return 0;
}