/*pedirle a usuario que elija el numero de filas y columnas para su matriz, que
instrodusca los datos y transponer esta misma en una nueva matriz */

#include <stdio.h>
#include <stdlib.h>

//funcion que reguistra los datos de la matriz
void registro(int FILA, int CELDA, int matriz_A[FILA][CELDA]){
    for(int filas_A = 0; filas_A < FILA; filas_A++){
        for(int celdas_A = 0; celdas_A < CELDA; celdas_A++){
            int f = filas_A;
            int c = celdas_A;
            printf("posicion [%i][%i]: ", (f+1),(c+1));
            scanf("%i", &matriz_A[filas_A][celdas_A]);
        }
    }
}
//funcion que se encarga de transponer la matriz original en una nueva y llenarla, invirtiendo (CELDA y FILA)
void transposicion(int FILA, int CELDA, int matriz_A[FILA][CELDA], int matriz_A1[CELDA][FILA]){
    for(int filas_A = 0; filas_A < FILA; filas_A++){
        for(int celdas_A = 0; celdas_A < CELDA; celdas_A++){
            matriz_A1[celdas_A][filas_A] = matriz_A[filas_A][celdas_A];
        }
    }
}
//funcion que imprime la matriz origunal 
void matriz_original(int FILA, int CELDA, int matriz_A[FILA][CELDA]){
    for(int filas = 0; filas < FILA; filas++){
        for(int celdas = 0; celdas < CELDA; celdas++){
            printf("%i ", matriz_A[filas][celdas]);
        }
        printf("\n");
    }
}
//funcion que imprime la nueva matriz ya transpueta 
void matriz_transpuesta(int FILA, int CELDA, int matriz_A1[CELDA][FILA]){
    for(int filas = 0; filas < CELDA; filas++){
        for(int celdas = 0; celdas < FILA; celdas++){
            printf("%i ", matriz_A1[filas][celdas]);
        }
        printf("\n");
    }
}
//FUNCION PRINCIPAL
int main(){
    int FILA = 0, CELDA = 0;
//reguistrta cuantas filas y celdas tendra la matrz y verifica que no sea de numeros negativos
    do{
        printf("De cuantas filas sera su matriz A:\n");
        scanf("%i", &FILA);
        printf("De cuantas columnas sera su matriz A:\n");
        scanf("%i", &CELDA);
    }while(FILA < 0 || CELDA < 0);
//declara las dos matrices, (A1) invierte celdas y filas
    int matriz_A[FILA][CELDA];
    int matriz_A1[CELDA][FILA];
//se manda a llamar la funcion que reguistra la matriz A
    registro(FILA, CELDA, matriz_A);
    system("clear");
//se manda a llamar la funcion para transponer la atriz
    transposicion(FILA, CELDA, matriz_A, matriz_A1);
//se imprimen las dos matrices 
    printf("la matriz A original es:\n");
    matriz_original(FILA, CELDA, matriz_A);

    printf("la matriz A1 transpuesta es:\n");
    matriz_transpuesta(FILA, CELDA, matriz_A1);

    return 0;
}