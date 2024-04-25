/*este programa reconoce una matriz y verfica si es una matriz diagonal o no,
una matriz diagonal es aquella que todos sus numeros son 0 menos la diagonal principal
aqui ya solo copie codigo ya hecho de mis anteriores trabajos en cosas como delimitara 
la matriz, el registro y la llamda a imprimir*/

#include <stdio.h>
#include <stdlib.h>

//funcion que reguistra los datos de la matriz
void registro(int FILA, int CELDA, int matriz[FILA][CELDA]){
    for(int filas = 0; filas < FILA; filas++){
        for(int celdas = 0; celdas < CELDA; celdas++){
            int f = filas;
            int c = celdas;
            printf("posicion [%i][%i]: ", (f+1),(c+1));
            scanf("%i", &matriz[filas][celdas]);
        }
    }
}

int validacion(int FILA, int CELDA, int matriz[FILA][CELDA]){
    for(int filas = 0; filas < FILA; filas++){
        for(int celdas = 0; celdas < CELDA; celdas++){
            if(filas != celdas){
                if(matriz[filas][celdas] == 0){
                    return 1;
                }else{
                    return 0;
                }
            }
        }
    }
}
//funcion qu eimprime la matriz
void imprimir_matriz(int FILA, int CELDA, int matriz[FILA][CELDA]){
    for(int filas = 0; filas < FILA; filas++){
        for(int celdas = 0; celdas < CELDA; celdas++){
            printf("%i ", matriz[filas][celdas]);
        }
        printf("\n");
    }
}

//FUNCION PRINCIPAL
int main(){
    int FILA = 0, CELDA = 0, resultado = 0;
//reguistrta cuantas filas y celdas tendra la matrz y verifica que no sea de numeros negativos
    do{
        printf("De cuantas filas sera su matriz A:\n");
        scanf("%i", &FILA);
        printf("De cuantas columnas sera su matriz A:\n");
        scanf("%i", &CELDA);
    }while(FILA < 0 || CELDA < 0);
//declara la matriz 
    int matriz[FILA][CELDA];
    //se manda a llamar la funcion que reguistra la matriz A
    registro(FILA, CELDA, matriz);
    system("clear");
//se manda a llamar a la funcion para validad y ver si esta cumple con los equisitos 
    resultado = validacion(FILA, CELDA, matriz);
//imprime el resultado
    if(resultado == 1){
        printf("es una matriz diagonal");
        printf("\n");
        //manda a llamar una funcion para imprimir la matriz
        imprimir_matriz(FILA, CELDA, matriz);
    }else{
        printf("no es una matriz diagonal");
        printf("\n");
        imprimir_matriz(FILA, CELDA, matriz);
    }
    
    return 0;
}