/*algoritmo que multiplica dos matrices ya definidas de 3x3, unicamente muestra la matriz resultante C
el unico problema es que todas las matrices tienen que ser iguales en longitudes*/

#include <stdio.h>
//se definen como constantes las fila y celdas de las matrices 
#define FILAS 3
#define CELDAS 3
#define CICLOS 3    //para la multiplicacion se tiene q pasar varias veces por la misma fila 

//funcion que realiza la multiplicacion de las matrices 
void multiplicacion(int A[FILAS][CELDAS], int B[FILAS][CELDAS], int matriz_C[FILAS][CELDAS]){
    int suma = 0, multi = 0, fila_C = 0, celda_C = 0;
//son tres FOR porque una fila se tiene q recorer mas de una vez  
    for(int ciclo = 0; ciclo < CICLOS; ciclo++){
        for(int fila = 0; fila < FILAS; fila++){
            for(int celda = 0; celda < CELDAS; celda++){
                // cuando de multiplican dos valores se tienen que sumar, todos los resultados de las multi
                multi = (A [ciclo][celda])*(B [celda][fila]);
                // se suman de manera acumulada
                suma += multi;
            }
            //esto es solo para no confundirce
            fila_C = ciclo;
            celda_C = fila;
            //el valor de la suma acumulada se guarda en la matriz resultante C
            matriz_C[fila_C][celda_C] = suma;
            //se tiene q borrar o vaciar la variabre de la suma para que no se acumulen entre si 
            suma = 0;
        }
    }
}
//solo imprime la matriz resultante
void imprimir_matriz_C(int matriz_C[FILAS][CELDAS]){
    for(int fila = 0; fila < FILAS; fila++){
        for(int celda = 0; celda < CELDAS; celda++){
            printf("%i ", matriz_C[fila][celda]);
        }
        printf("\n");
    }
}
//FUNCION PRINCIPAL
int main(){
//se declaran las dos matrices, puede modificarlas para ver otros resultados 
    int matriz_A[FILAS][CELDAS] = {
        {4, 5, 2},
        {2, 1, 7},
        {5, 4, 2}
    };
    int matriz_B[FILAS][CELDAS] = {
        {8, 3, 1},
        {9, 4, 5},
        {2, 6, 7}
    };
// se declara la matriz resultante C
    int matriz_C[FILAS][CELDAS];
// se manda a llamar la funcion de multiplicacion
    multiplicacion(matriz_A, matriz_B, matriz_C);
// salida de datos 
    printf("la multiplicacion de la matriz (A*B) es la matriz C\n");
// funcion q imprime la matriz resultante 
    imprimir_matriz_C(matriz_C);

    return 0;
}