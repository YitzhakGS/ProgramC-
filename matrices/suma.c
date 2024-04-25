/*
mediante el regustro de dos matrices iguales (A,B), cuyas dimenciones son dadas por el usuario
se suman para dar una matriz resultante C
*/

#include <stdio.h>
#include <stdlib.h>
//reguistra los datos dentro de las fos matrices 
void registro_Matriz(int FILAS, int CELDAS, int matriz[FILAS][CELDAS]){
    for(int filas = 0; filas < FILAS; filas++){
        for(int celdas = 0; celdas < CELDAS; celdas++){
            int f = filas;
            int c = celdas;
            printf("posicion [%i][%i]: ", (f+1),(c+1));
            scanf("%i", &matriz[filas][celdas]);
        }
    }
}
//se realiza la suma de matrices
void suma_de_Matrices(int FILAS, int CELDAS, int matriz_A[FILAS][CELDAS], int matriz_B[FILAS][CELDAS], int matriz_C[FILAS][CELDAS]){
    for(int filas = 0; filas < FILAS; filas++){
        for(int celdas = 0; celdas < CELDAS; celdas++){
            
            matriz_C[filas][celdas] = (matriz_A[filas][celdas])+(matriz_B[filas][celdas]); 
        }
    }
}
//funcion que imprime en pantalla la matriz resultante 
void imprimir_Matriz_C(int FILAS, int CELDAS, int matriz_C[FILAS][CELDAS]){
    for(int filas = 0; filas < FILAS; filas++){
        for(int celdas = 0; celdas < CELDAS; celdas++){
            printf("%i ", matriz_C[filas][celdas]);
        }
        printf("\n");
    }
}

int main(){
    int FILAS = 0, CELDAS = 0;
//asignar las dimeciones de la matriz
    do{
        printf("De cuantas filas sera su matriz A:\n");
        scanf("%i", &FILAS);
        printf("De cuantas columnas sera su matriz A:\n");
        scanf("%i", &CELDAS);
    }while(FILAS < 0 || CELDAS < 0);
//declarar matrices
    int matriz_A[FILAS][CELDAS];
    int matriz_B[FILAS][CELDAS];
    int matriz_C[FILAS][CELDAS];
//entrada de datos de las dos matrices
    printf("introdusca los datos de la matriz A:\n");
    registro_Matriz(FILAS, CELDAS, matriz_A);
    system("clear");
    printf("introdusca los datos de la matriz B:\n");
    registro_Matriz(FILAS, CELDAS, matriz_B);
    system("clear");
//suma de matrices mediante ciclos anidados
    suma_de_Matrices(FILAS, CELDAS, matriz_A, matriz_B, matriz_C);
    printf("la matriz resultante C es:\n");
//salida de los valores de la suma 
    imprimir_Matriz_C(FILAS, CELDAS, matriz_C);

    return 0;
}