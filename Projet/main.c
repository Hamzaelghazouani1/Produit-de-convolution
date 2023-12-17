#include <stdio.h>
#include "./matrice/matrice.h"

int main(){
    int n = 4;
    int **matrice = get_random_matrice(n);
    print_matrice(matrice,n);
    int **m_border = border_matrice(matrice,n);
    printf("\n\n\n\n");
    print_matrice(m_border,n+2);
    free_matrice(m_border,n+2);
    free_matrice(matrice,n);
    return 0;
}